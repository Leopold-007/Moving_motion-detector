#include "mcc_generated_files/mcc.h"

// Timer0 period: 250msec
uint8_t tmr = 0;

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    while (1)
    {
        if (TMR0_HasOverflowOccured()) {
            TMR0IF = 0;
            if (++tmr >= 4) {  // 250msec * 4 = 1sec
                tmr = 0;
                ADC_SelectChannel(channel_AN3);
                ADC_StartConversion();
                while(!ADC_IsConversionDone());
                adc_result_t out = ADC_GetConversionResult();
                printf("%d\n", out);
            }
        }
    }
}
