/*
    The code in this file uses open source libraries provided by thecoderscorner

    DO NOT EDIT THIS FILE, IT WILL BE GENERATED EVERY TIME YOU USE THE UI DESIGNER
    INSTEAD EITHER PUT CODE IN YOUR SKETCH OR CREATE ANOTHER SOURCE FILE.

    All the variables you may need access to are marked extern in this file for easy
    use elsewhere.
 */

#include <tcMenu.h>
#include "simpleU8g2_menu.h"

// Global variable declarations

U8g2GfxMenuConfig gfxConfig;
U8g2MenuRenderer renderer;

// Global Menu Item declarations

const PROGMEM BooleanMenuInfo minfoSettingsSafetyLock = { "Safety lock", 6, 0xffff, 1, NO_CALLBACK, NAMING_TRUE_FALSE };
BooleanMenuItem menuSettingsSafetyLock(&minfoSettingsSafetyLock, false, NULL);
RENDERING_CALLBACK_NAME_INVOKE(fnSettingsRtCall, backSubItemRenderFn, "Settings", -1, NULL)
const PROGMEM SubMenuInfo minfoSettings = { "Settings", 5, 0xffff, 0, NO_CALLBACK };
BackMenuItem menuBackSettings(fnSettingsRtCall, &menuSettingsSafetyLock);
SubMenuItem menuSettings(&minfoSettings, &menuBackSettings, NULL);
const PROGMEM AnyMenuInfo minfoStartToasting = { "Start toasting", 4, 0xffff, 0, onStartToasting };
ActionMenuItem menuStartToasting(&minfoStartToasting, &menuSettings);
const PROGMEM BooleanMenuInfo minfoFrozen = { "Frozen", 3, 6, 1, NO_CALLBACK, NAMING_YES_NO };
BooleanMenuItem menuFrozen(&minfoFrozen, false, &menuStartToasting);
const char enumStrType_0[] PROGMEM = "Bread";
const char enumStrType_1[] PROGMEM = "Bagel";
const char enumStrType_2[] PROGMEM = "Pancake";
const char* const enumStrType[] PROGMEM  = { enumStrType_0, enumStrType_1, enumStrType_2 };
const PROGMEM EnumMenuInfo minfoType = { "Type", 2, 4, 2, NO_CALLBACK, enumStrType };
EnumMenuItem menuType(&minfoType, 0, &menuFrozen);
const PROGMEM AnalogMenuInfo minfoToasterPower = { "Toaster power", 1, 2, 10, NO_CALLBACK, 0, 1, "" };
AnalogMenuItem menuToasterPower(&minfoToasterPower, 0, &menuType);
const PROGMEM ConnectorLocalInfo applicationInfo = { "Super Toaster", "fddaa423-cb5c-4024-8f67-a9742f4457f3" };

// Set up code

void setupMenu() {
    prepareBasicU8x8Config(gfxConfig);
    renderer.setGraphicsDevice(&gfx, &gfxConfig);
    switches.initialise(io8574, true);
    menuMgr.initForEncoder(&renderer, &menuToasterPower, ENCODER_PIN_A, ENCODER_PIN_B, ENCODER_PIN_OK);
}
