EESchema Schematic File Version 2
LIBS:can-bus
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:doppler-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Doppler sensor"
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L doppler U1
U 1 1 5AC445B6
P 5400 3400
F 0 "U1" H 4650 3800 60  0000 C CNN
F 1 "doppler" H 4750 3700 60  0000 C CNN
F 2 "" H 5300 3500 60  0001 C CNN
F 3 "" H 5300 3500 60  0001 C CNN
	1    5400 3400
	1    0    0    -1  
$EndComp
$Comp
L Conn_01x04 J1
U 1 1 5AC44624
P 7300 3300
F 0 "J1" H 7300 3500 50  0000 C CNN
F 1 "Pin header" H 7300 3000 50  0000 C CNN
F 2 "" H 7300 3300 50  0001 C CNN
F 3 "" H 7300 3300 50  0001 C CNN
	1    7300 3300
	1    0    0    -1  
$EndComp
NoConn ~ 5050 2750
NoConn ~ 5450 2750
NoConn ~ 5550 2750
NoConn ~ 5650 2750
Text Label 7400 3250 0    60   ~ 0
5V
Text Label 7400 3350 0    60   ~ 0
GND
Text Label 7400 3450 0    60   ~ 0
TxD
Text Label 7400 3550 0    60   ~ 0
RxD
$Comp
L +5V #PWR01
U 1 1 5AC44F5F
P 6900 2850
F 0 "#PWR01" H 6900 2700 50  0001 C CNN
F 1 "+5V" H 6900 2990 50  0000 C CNN
F 2 "" H 6900 2850 50  0001 C CNN
F 3 "" H 6900 2850 50  0001 C CNN
	1    6900 2850
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 5AC44FAD
P 6900 4000
F 0 "#PWR02" H 6900 3750 50  0001 C CNN
F 1 "GND" H 6900 3850 50  0000 C CNN
F 2 "" H 6900 4000 50  0001 C CNN
F 3 "" H 6900 4000 50  0001 C CNN
	1    6900 4000
	1    0    0    -1  
$EndComp
$Comp
L PWR_FLAG #FLG03
U 1 1 5AC45015
P 7150 3950
F 0 "#FLG03" H 7150 4025 50  0001 C CNN
F 1 "PWR_FLAG" H 7150 4100 50  0000 C CNN
F 2 "" H 7150 3950 50  0001 C CNN
F 3 "" H 7150 3950 50  0001 C CNN
	1    7150 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	5750 2750 5750 2550
Wire Wire Line
	6500 3200 7100 3200
Wire Wire Line
	5050 4050 5050 4100
Wire Wire Line
	5050 4100 6500 4100
Wire Wire Line
	6500 4100 6500 3300
Wire Wire Line
	6500 3300 7100 3300
Wire Wire Line
	7100 3400 6400 3400
Wire Wire Line
	6400 3400 6400 2600
Wire Wire Line
	6400 2600 5250 2600
Wire Wire Line
	5250 2600 5250 2750
Wire Wire Line
	6300 3500 7100 3500
Wire Wire Line
	6300 3500 6300 2650
Wire Wire Line
	6300 2650 5150 2650
Wire Wire Line
	5150 2650 5150 2750
Wire Wire Line
	5750 2550 6500 2550
Wire Wire Line
	6500 2550 6500 3200
Wire Wire Line
	6900 2850 6900 3200
Connection ~ 6900 3200
Connection ~ 6900 3500
Wire Wire Line
	7150 3000 6900 3000
Connection ~ 6900 3000
Wire Wire Line
	6900 3500 6900 4000
Wire Wire Line
	6900 3950 7150 3950
Connection ~ 6900 3950
$Comp
L PWR_FLAG #FLG04
U 1 1 5AC44FDC
P 7150 3000
F 0 "#FLG04" H 7150 3075 50  0001 C CNN
F 1 "PWR_FLAG" H 7150 3150 50  0000 C CNN
F 2 "" H 7150 3000 50  0001 C CNN
F 3 "" H 7150 3000 50  0001 C CNN
	1    7150 3000
	1    0    0    -1  
$EndComp
$EndSCHEMATC
