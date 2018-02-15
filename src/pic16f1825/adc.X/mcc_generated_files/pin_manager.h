/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16F1825
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_AN0 aliases
#define channel_AN0_TRIS               TRISAbits.TRISA0
#define channel_AN0_LAT                LATAbits.LATA0
#define channel_AN0_PORT               PORTAbits.RA0
#define channel_AN0_WPU                WPUAbits.WPUA0
#define channel_AN0_ANS                ANSELAbits.ANSA0
#define channel_AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_AN0_GetValue()           PORTAbits.RA0
#define channel_AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_AN0_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_AN0_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_AN0_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set channel_AN1 aliases
#define channel_AN1_TRIS               TRISAbits.TRISA1
#define channel_AN1_LAT                LATAbits.LATA1
#define channel_AN1_PORT               PORTAbits.RA1
#define channel_AN1_WPU                WPUAbits.WPUA1
#define channel_AN1_ANS                ANSELAbits.ANSA1
#define channel_AN1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_AN1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_AN1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_AN1_GetValue()           PORTAbits.RA1
#define channel_AN1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_AN1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_AN1_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define channel_AN1_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define channel_AN1_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define channel_AN1_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set channel_AN2 aliases
#define channel_AN2_TRIS               TRISAbits.TRISA2
#define channel_AN2_LAT                LATAbits.LATA2
#define channel_AN2_PORT               PORTAbits.RA2
#define channel_AN2_WPU                WPUAbits.WPUA2
#define channel_AN2_ANS                ANSELAbits.ANSA2
#define channel_AN2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define channel_AN2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define channel_AN2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define channel_AN2_GetValue()           PORTAbits.RA2
#define channel_AN2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define channel_AN2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define channel_AN2_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define channel_AN2_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define channel_AN2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define channel_AN2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set channel_AN3 aliases
#define channel_AN3_TRIS               TRISAbits.TRISA4
#define channel_AN3_LAT                LATAbits.LATA4
#define channel_AN3_PORT               PORTAbits.RA4
#define channel_AN3_WPU                WPUAbits.WPUA4
#define channel_AN3_ANS                ANSELAbits.ANSA4
#define channel_AN3_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define channel_AN3_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define channel_AN3_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define channel_AN3_GetValue()           PORTAbits.RA4
#define channel_AN3_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define channel_AN3_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define channel_AN3_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define channel_AN3_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define channel_AN3_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define channel_AN3_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set channel_AN4 aliases
#define channel_AN4_TRIS               TRISCbits.TRISC0
#define channel_AN4_LAT                LATCbits.LATC0
#define channel_AN4_PORT               PORTCbits.RC0
#define channel_AN4_WPU                WPUCbits.WPUC0
#define channel_AN4_ANS                ANSELCbits.ANSC0
#define channel_AN4_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define channel_AN4_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define channel_AN4_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define channel_AN4_GetValue()           PORTCbits.RC0
#define channel_AN4_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define channel_AN4_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define channel_AN4_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define channel_AN4_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define channel_AN4_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define channel_AN4_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set channel_AN5 aliases
#define channel_AN5_TRIS               TRISCbits.TRISC1
#define channel_AN5_LAT                LATCbits.LATC1
#define channel_AN5_PORT               PORTCbits.RC1
#define channel_AN5_WPU                WPUCbits.WPUC1
#define channel_AN5_ANS                ANSELCbits.ANSC1
#define channel_AN5_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define channel_AN5_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define channel_AN5_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define channel_AN5_GetValue()           PORTCbits.RC1
#define channel_AN5_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define channel_AN5_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define channel_AN5_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define channel_AN5_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define channel_AN5_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define channel_AN5_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set channel_AN6 aliases
#define channel_AN6_TRIS               TRISCbits.TRISC2
#define channel_AN6_LAT                LATCbits.LATC2
#define channel_AN6_PORT               PORTCbits.RC2
#define channel_AN6_WPU                WPUCbits.WPUC2
#define channel_AN6_ANS                ANSELCbits.ANSC2
#define channel_AN6_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define channel_AN6_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define channel_AN6_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define channel_AN6_GetValue()           PORTCbits.RC2
#define channel_AN6_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define channel_AN6_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define channel_AN6_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define channel_AN6_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define channel_AN6_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define channel_AN6_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set channel_AN7 aliases
#define channel_AN7_TRIS               TRISCbits.TRISC3
#define channel_AN7_LAT                LATCbits.LATC3
#define channel_AN7_PORT               PORTCbits.RC3
#define channel_AN7_WPU                WPUCbits.WPUC3
#define channel_AN7_ANS                ANSELCbits.ANSC3
#define channel_AN7_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define channel_AN7_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define channel_AN7_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define channel_AN7_GetValue()           PORTCbits.RC3
#define channel_AN7_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define channel_AN7_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define channel_AN7_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define channel_AN7_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define channel_AN7_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define channel_AN7_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/