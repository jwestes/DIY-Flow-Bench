/****************************************
 * configurations.h - define variables and configure hardware
 * This file is part of the DIY Flow Bench project. For more information including usage and licensing please refer to: https://github.com/DeeEmm/DIY-Flow-Bench
 ***/


/****************************************
 * CONFIGURE PINS 
 * Default Board - Mega 2560
 ***/


// Sensors
MAF_PIN = 0;
REF_PRESSURE_PIN = 11;
REF_VAC_PIN = 12;
PITOT_PIN = 13;

// Displays
FOURX7SEG_DISPLAY1_CLK_PIN = 14;
FOURX7SEG_DISPLAY1_DIO_PIN = 15;
FOURX7SEG_DISPLAY2_CLK_PIN = 16;
FOURX7SEG_DISPLAY2_DIO_PIN = 17;
// set pin values for pitot display
// set pin values for vacuum display
// set pin values for reference pressure display
// set pin values for flow display
// set pin values for main display


// Controls
// Set pin value for Clickwheel
// Set pin value for additional control buttons (functions to be determined)




/****************************************
 * CONFIGURE DISPLAYS
 *
 * 1 - FOURX20CHAR_DISPLAY
 * 2 - TFT_DISPLAY
 * 3 - OLED_DISPLAY
 * 4 - FOURX7SEG_DISPLAY
 * 
 ***/

//set main display type
mainDisplayType = FOURX20CHAR_DISPLAY;

// Set secondary display types
flowDisplayType = FOURX7SEG_DISPLAY;
refDisplayType = FOURX7SEG_DISPLAY;
vacDisplayType = FOURX7SEG_DISPLAY;
pitotDisplayType = FOURX7SEG_DISPLAY;

// Enable secondary displays
flowDisplayEnabled = true;
refDisplayEnabled = false;
vacDisplayEnabled = false;
pitotDisplayEnabled = false;




/****************************************
 * CONFIGURE SENSORS
 ***/

// + MAF
// + Pressure
// + Temperature
// + Humidity



/****************************************
 * CONFIGURE CONTROLS
 ***/

// Interface controls
// + Rotary encoder
// + Click button

// Vac source control
// + Bench start
// + Bench stop


/****************************************
 * CONFIGURE CALIBRATION
 ***/

// MEGA 2560 NVM addresses
