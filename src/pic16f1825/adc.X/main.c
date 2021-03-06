#include "mcc_generated_files/mcc.h"
#include "stdlib.h"
#include "string.h"

#define MASK 0b00000001

// Timer0 period: 8msec
uint8_t tmr = 0;

const adc_channel_t ANALOG_IN[4] = {
    channel_AN2, channel_AN4, channel_AN5, channel_AN6
};
    
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    uint8_t buf[8] = {'\n'};
    uint8_t cnt = 0;
    uint8_t c;
    uint8_t t_max = DATAEE_ReadByte(0);  // 8msec * 125 = 1sec
    uint8_t channels = DATAEE_ReadByte(1);
    adc_result_t level[4];
    uint8_t mask = MASK;

    uint8_t i;

    while (1)
    {
        if (EUSART_DataReady) {
            c = EUSART_Read();
            buf[cnt++] = c;
            if (c == '\n') {
                buf[cnt] = '\0';
                cnt = 0;
                if (!strncmp("t:", buf, 2)) {
                    t_max = atoi(&buf[2]);
                    DATAEE_WriteByte(0, t_max);                
                    // printf("t_max: %d\n", t_max);
                } else if (!strncmp("f:", buf, 2)) {
                    channels = atoi(&buf[2]);
                    DATAEE_WriteByte(1, channels);                
                    // printf("channels: %d\n", channels);
                }
            }
        }
        if (TMR0_HasOverflowOccured()) {
            TMR0IF = 0;
            if (++tmr >= t_max) {
                //printf("%d\n", t_max);
                tmr = 0;
                mask = MASK;
                for (i=0; i<4; i++) {
                    if (mask & channels) {
                        ADC_SelectChannel(ANALOG_IN[i]);
                        ADC_StartConversion();
                        while(!ADC_IsConversionDone());
                        level[i] = ADC_GetConversionResult();
                    } else {
                        level[i] = 0;
                    }
                    mask = mask << 1;
                }
                for (i=0; i<3; i++) {
                    printf("%d,", level[i]);
                }
                printf("%d\n", level[3]);
            }
        }
    }
}
