/*
* EEZ PSU Firmware
* Copyright (C) 2015-present, Envox d.o.o.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.

* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.

* You should have received a copy of the GNU General Public License
* along with this program.  If not, see http://www.gnu.org/licenses.
*/

#pragma once

namespace eez {
namespace psu {
namespace gui {

enum DataEnum {
    DATA_ID_NONE,
    DATA_ID_CHANNELS,
    DATA_ID_CHANNEL_STATUS,
    DATA_ID_CHANNEL_OUTPUT_STATE,
    DATA_ID_CHANNEL_OUTPUT_MODE,
    DATA_ID_CHANNEL_MON_VALUE,
    DATA_ID_CHANNEL_U_SET,
    DATA_ID_CHANNEL_U_MON,
    DATA_ID_CHANNEL_U_MON_DAC,
    DATA_ID_CHANNEL_U_LIMIT,
    DATA_ID_CHANNEL_I_SET,
    DATA_ID_CHANNEL_I_MON,
    DATA_ID_CHANNEL_I_MON_DAC,
    DATA_ID_CHANNEL_I_LIMIT,
    DATA_ID_CHANNEL_P_MON,
    DATA_ID_CHANNEL_DISPLAYED_VALUES,
    DATA_ID_LRIP,
    DATA_ID_OVP,
    DATA_ID_OCP,
    DATA_ID_OPP,
    DATA_ID_OTP,
    DATA_ID_ALERT_MESSAGE,
    DATA_ID_ALERT_MESSAGE_2,
    DATA_ID_EDIT_VALUE,
    DATA_ID_EDIT_UNIT,
    DATA_ID_EDIT_INFO,
    DATA_ID_EDIT_INFO1,
    DATA_ID_EDIT_INFO2,
    DATA_ID_EDIT_MODE_INTERACTIVE_MODE_SELECTOR,
    DATA_ID_EDIT_STEPS,
    DATA_ID_MODEL_INFO,
    DATA_ID_FIRMWARE_INFO,
    DATA_ID_SELF_TEST_RESULT,
    DATA_ID_KEYPAD_TEXT,
    DATA_ID_KEYPAD_CAPS,
    DATA_ID_KEYPAD_MAX_ENABLED,
    DATA_ID_KEYPAD_DEF_ENABLED,
    DATA_ID_KEYPAD_SIGN_ENABLED,
    DATA_ID_KEYPAD_DOT_ENABLED,
    DATA_ID_KEYPAD_UNIT_ENABLED,
    DATA_ID_CALIBRATION_PASSWORD_STATUS,
    DATA_ID_CHANNEL_LABEL,
    DATA_ID_CHANNEL_SHORT_LABEL,
    DATA_ID_CHANNEL_TEMP_STATUS,
    DATA_ID_CHANNEL_TEMP,
    DATA_ID_CHANNEL_ON_TIME_TOTAL,
    DATA_ID_CHANNEL_ON_TIME_LAST,
    DATA_ID_CHANNEL_CALIBRATION_STATUS,
    DATA_ID_CHANNEL_CALIBRATION_STATE,
    DATA_ID_CHANNEL_CALIBRATION_DATE,
    DATA_ID_CHANNEL_CALIBRATION_REMARK,
    DATA_ID_CHANNEL_CALIBRATION_STEP_NUM,
    DATA_ID_CHANNEL_CALIBRATION_STEP_STATUS,
    DATA_ID_CHANNEL_CALIBRATION_STEP_VALUE,
    DATA_ID_CHANNEL_CALIBRATION_STEP_PREV_ENABLED,
    DATA_ID_CHANNEL_CALIBRATION_STEP_NEXT_ENABLED,
    DATA_ID_CAL_CH_U_MIN,
    DATA_ID_CAL_CH_U_MID,
    DATA_ID_CAL_CH_U_MAX,
    DATA_ID_CAL_CH_I_MIN,
    DATA_ID_CAL_CH_I_MID,
    DATA_ID_CAL_CH_I_MAX,
    DATA_ID_CHANNEL_PROTECTION_OVP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OVP_LEVEL,
    DATA_ID_CHANNEL_PROTECTION_OVP_DELAY,
    DATA_ID_CHANNEL_PROTECTION_OVP_LIMIT,
    DATA_ID_CHANNEL_PROTECTION_OCP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OCP_DELAY,
    DATA_ID_CHANNEL_PROTECTION_OCP_LIMIT,
    DATA_ID_CHANNEL_PROTECTION_OCP_MAX_CURRENT_LIMIT_CAUSE,
    DATA_ID_CHANNEL_PROTECTION_OPP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OPP_LEVEL,
    DATA_ID_CHANNEL_PROTECTION_OPP_DELAY,
    DATA_ID_CHANNEL_PROTECTION_OPP_LIMIT,
    DATA_ID_CHANNEL_PROTECTION_OTP_INSTALLED,
    DATA_ID_CHANNEL_PROTECTION_OTP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OTP_LEVEL,
    DATA_ID_CHANNEL_PROTECTION_OTP_DELAY,
    DATA_ID_EVENT_QUEUE_LAST_EVENT_TYPE,
    DATA_ID_EVENT_QUEUE_LAST_EVENT_MESSAGE,
    DATA_ID_EVENT_QUEUE_EVENTS,
    DATA_ID_EVENT_QUEUE_EVENTS_TYPE,
    DATA_ID_EVENT_QUEUE_EVENTS_MESSAGE,
    DATA_ID_EVENT_QUEUE_MULTIPLE_PAGES,
    DATA_ID_EVENT_QUEUE_PREVIOUS_PAGE_ENABLED,
    DATA_ID_EVENT_QUEUE_NEXT_PAGE_ENABLED,
    DATA_ID_EVENT_QUEUE_PAGE_INFO,
    DATA_ID_CHANNEL_LRIPPLE_MAX_CURRENT,
    DATA_ID_CHANNEL_LRIPPLE_MAX_DISSIPATION,
    DATA_ID_CHANNEL_LRIPPLE_STATUS,
    DATA_ID_CHANNEL_LRIPPLE_AUTO_MODE,
    DATA_ID_CHANNEL_RSENSE_STATUS,
    DATA_ID_CHANNEL_RPROG_INSTALLED,
    DATA_ID_CHANNEL_RPROG_STATUS,
    DATA_ID_CHANNEL_IS_COUPLED,
    DATA_ID_CHANNEL_IS_TRACKED,
    DATA_ID_CHANNEL_IS_COUPLED_OR_TRACKED,
    DATA_ID_CHANNEL_COUPLING_MODE,
    DATA_ID_CHANNEL_COUPLING_SELECTED_MODE,
    DATA_ID_SYS_ON_TIME_TOTAL,
    DATA_ID_SYS_ON_TIME_LAST,
    DATA_ID_SYS_TEMP_MAIN_STATUS,
    DATA_ID_SYS_TEMP_MAIN,
    DATA_ID_SYS_TEMP_AUX_STATUS,
    DATA_ID_SYS_TEMP_AUX,
    DATA_ID_SYS_INFO_FIRMWARE_VER,
    DATA_ID_SYS_INFO_SERIAL_NO,
    DATA_ID_SYS_INFO_SCPI_VER,
    DATA_ID_SYS_INFO_CPU,
    DATA_ID_SYS_INFO_ETHERNET,
    DATA_ID_SYS_INFO_FAN_STATUS,
    DATA_ID_SYS_INFO_FAN_SPEED,
    DATA_ID_CHANNEL_BOARD_INFO_LABEL,
    DATA_ID_CHANNEL_BOARD_INFO_REVISION,
    DATA_ID_SYS_INFO_DATE_TIME_YEAR,
    DATA_ID_SYS_INFO_DATE_TIME_MONTH,
    DATA_ID_SYS_INFO_DATE_TIME_DAY,
    DATA_ID_SYS_INFO_DATE_TIME_HOUR,
    DATA_ID_SYS_INFO_DATE_TIME_MINUTE,
    DATA_ID_SYS_INFO_DATE_TIME_SECOND,
    DATA_ID_SYS_INFO_DATE_TIME_TIME_ZONE,
    DATA_ID_SYS_INFO_DATE_TIME_DST,
    DATA_ID_SET_PAGE_DIRTY,
    DATA_ID_PROFILES_LIST1,
    DATA_ID_PROFILES_LIST2,
    DATA_ID_PROFILES_AUTO_RECALL_STATUS,
    DATA_ID_PROFILES_AUTO_RECALL_LOCATION,
    DATA_ID_PROFILE_STATUS,
    DATA_ID_PROFILE_LABEL,
    DATA_ID_PROFILE_REMARK,
    DATA_ID_PROFILE_IS_AUTO_RECALL_LOCATION,
    DATA_ID_PROFILE_CHANNEL_U_SET,
    DATA_ID_PROFILE_CHANNEL_I_SET,
    DATA_ID_PROFILE_CHANNEL_OUTPUT_STATE,
    DATA_ID_SYS_ETHERNET_INSTALLED,
    DATA_ID_SYS_ETHERNET_ENABLED,
    DATA_ID_SYS_ETHERNET_STATUS,
    DATA_ID_SYS_ETHERNET_IP_ADDRESS,
    DATA_ID_SYS_ETHERNET_SCPI_PORT,
    DATA_ID_CHANNEL_IS_VOLTAGE_BALANCED,
    DATA_ID_CHANNEL_IS_CURRENT_BALANCED,
    DATA_ID_SYS_OUTPUT_PROTECTION_COUPLED,
    DATA_ID_SYS_SHUTDOWN_WHEN_PROTECTION_TRIPPED,
    DATA_ID_SYS_FORCE_DISABLING_ALL_OUTPUTS_ON_POWER_UP
};

enum FontsEnum {
    FONT_ID_NONE,
    FONT_ID_SMALL,
    FONT_ID_MEDIUM,
    FONT_ID_LARGE,
    FONT_ID_LARGE_LANDSCAPE,
    FONT_ID_ICONS
};

enum BitmapsEnum {
    BITMAP_ID_NONE,
    BITMAP_ID_LOGO,
    BITMAP_ID_BP_COUPLED
};

enum StylesEnum {
    STYLE_ID_NONE,
    STYLE_ID_BAR_GRAPH_I_DEFAULT,
    STYLE_ID_BAR_GRAPH_LIMIT_LINE,
    STYLE_ID_BAR_GRAPH_SET_LINE,
    STYLE_ID_BAR_GRAPH_TEXT,
    STYLE_ID_BAR_GRAPH_TEXT_VERTICAL,
    STYLE_ID_BAR_GRAPH_U_DEFUALT,
    STYLE_ID_BAR_GRAPH_UNREGULATED,
    STYLE_ID_BOTTOM_BUTTON,
    STYLE_ID_BOTTOM_BUTTON_BACKGROUND,
    STYLE_ID_BOTTOM_BUTTON_DISABLED,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL_S,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL_S_LEFT,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL_S_DISABLED,
    STYLE_ID_CHANNEL_ERROR,
    STYLE_ID_CHANNEL_OFF_L,
    STYLE_ID_CHANNEL_OFF_LANDSCAPE,
    STYLE_ID_CHANNEL_OFF,
    STYLE_ID_COUPLED_INFO,
    STYLE_ID_COUPLED_INFO_S,
    STYLE_ID_DEFAULT,
    STYLE_ID_DEFAULT_DISABLED,
    STYLE_ID_DEFAULT_ACTIVE_S,
    STYLE_ID_DEFAULT_DISABLED_S_LEFT,
    STYLE_ID_DEFAULT_EDIT,
    STYLE_ID_DEFAULT_EDIT_INVERSE,
    STYLE_ID_DEFAULT_ICONS,
    STYLE_ID_DEFAULT_INVERSE,
    STYLE_ID_DEFAULT_L,
    STYLE_ID_DEFAULT_S,
    STYLE_ID_EDIT_INFO_S,
    STYLE_ID_EDIT_MODE_SLIDER_SCALE,
    STYLE_ID_EDIT_MODE_STEP_VERTICAL_SLIDER,
    STYLE_ID_EDIT_S,
    STYLE_ID_EDIT_VALUE,
    STYLE_ID_EDIT_VALUE_ACTIVE,
    STYLE_ID_EDIT_VALUE_ACTIVE_LEFT,
    STYLE_ID_EDIT_VALUE_ACTIVE_S_LEFT,
    STYLE_ID_EDIT_VALUE_ACTIVE_S_RIGHT,
    STYLE_ID_EDIT_VALUE_FOCUS_S_RIGHT,
    STYLE_ID_EDIT_VALUE_L,
    STYLE_ID_EDIT_VALUE_LEFT,
    STYLE_ID_EDIT_VALUE_S_CENTERED,
    STYLE_ID_EDIT_VALUE_S_LEFT,
    STYLE_ID_EDIT_VALUE_S_RIGHT,
    STYLE_ID_EDIT_VALUE_UR,
    STYLE_ID_EDIT_VALUE_UR_S_RIGHT,
    STYLE_ID_ERROR_ALERT,
    STYLE_ID_ERROR_ALERT_BUTTON,
    STYLE_ID_EVENT_ERROR,
    STYLE_ID_EVENT_INFO,
    STYLE_ID_EVENT_WARNING,
    STYLE_ID_INFO_ALERT,
    STYLE_ID_INFO_ALERT_BUTTON,
    STYLE_ID_YES_NO,
    STYLE_ID_YES_NO_BACKGROUND,
    STYLE_ID_YES_NO_MESSAGE,
    STYLE_ID_YES_NO_BUTTON,
    STYLE_ID_KEY,
    STYLE_ID_KEY_DISABLED,
    STYLE_ID_KEY_ICONS,
    STYLE_ID_KEY_SPEC,
    STYLE_ID_KEY_SPEC_ICONS,
    STYLE_ID_MAX_CURRENT_LIMIT_CAUSE,
    STYLE_ID_MENU_S,
    STYLE_ID_MON_DAC,
    STYLE_ID_MON_DAC_S,
    STYLE_ID_MON_VALUE,
    STYLE_ID_MON_VALUE_L,
    STYLE_ID_MON_VALUE_L_UR,
    STYLE_ID_MON_VALUE_LANDSCAPE_L_RIGHT,
    STYLE_ID_MON_VALUE_UR,
    STYLE_ID_MON_VALUE_UR_LANDSCAPE_L_RIGHT,
    STYLE_ID_NON_INTERACTIVE_BUTTON_S,
    STYLE_ID_NON_INTERACTIVE_BUTTON_S_DISABLED,
    STYLE_ID_PROT_INDICATOR_S,
    STYLE_ID_PROT_INDICATOR_SET_S,
    STYLE_ID_PROT_INDICATOR_TRIP_S,
    STYLE_ID_SET_VALUE_BALANCED,
    STYLE_ID_SET_VALUE_S_RIGHT_BALANCED,
    STYLE_ID_TAB_PAGE,
    STYLE_ID_TAB_PAGE_SELECTED,
    STYLE_ID_TOP_BAR_S,
    STYLE_ID_VALUE,
    STYLE_ID_VALUE_S,
    STYLE_ID_VALUE_L,
    STYLE_ID_YELLOW_1,
    STYLE_ID_YELLOW_2,
    STYLE_ID_YELLOW_3,
    STYLE_ID_YELLOW_4,
    STYLE_ID_YELLOW_5,
    STYLE_ID_YELLOW_6
};

enum PagesEnum {
    PAGE_ID_ETHERNET_INIT,
    PAGE_ID_SCREEN_CALIBRATION_INTRO,
    PAGE_ID_SCREEN_CALIBRATION_YES_NO,
    PAGE_ID_SCREEN_CALIBRATION_YES_NO_CANCEL,
    PAGE_ID_WELCOME,
    PAGE_ID_SELF_TEST_RESULT,
    PAGE_ID_MAIN,
    PAGE_ID_MAIN_HELP,
    PAGE_ID_EDIT_MODE_KEYPAD,
    PAGE_ID_EDIT_MODE_STEP,
    PAGE_ID_EDIT_MODE_STEP_HELP,
    PAGE_ID_EDIT_MODE_SLIDER,
    PAGE_ID_EDIT_MODE_SLIDER_HELP,
    PAGE_ID_INFO_ALERT,
    PAGE_ID_INFO_LONG_ALERT,
    PAGE_ID_ERROR_ALERT,
    PAGE_ID_YES_NO,
    PAGE_ID_ARE_YOU_SURE_WITH_MESSAGE,
    PAGE_ID_EVENT_QUEUE,
    PAGE_ID_KEYPAD,
    PAGE_ID_NUMERIC_KEYPAD,
    PAGE_ID_CH_SETTINGS_PROT,
    PAGE_ID_CH_SETTINGS_PROT_CLEAR,
    PAGE_ID_CH_SETTINGS_PROT_OVP,
    PAGE_ID_CH_SETTINGS_PROT_OCP,
    PAGE_ID_CH_SETTINGS_PROT_OPP,
    PAGE_ID_CH_SETTINGS_PROT_OTP,
    PAGE_ID_CH_SETTINGS_ADV,
    PAGE_ID_CH_SETTINGS_ADV_LRIPPLE,
    PAGE_ID_CH_SETTINGS_ADV_RSENSE,
    PAGE_ID_CH_SETTINGS_ADV_RPROG,
    PAGE_ID_CH_SETTINGS_ADV_TRACKING,
    PAGE_ID_CH_SETTINGS_ADV_COUPLING,
    PAGE_ID_CH_SETTINGS_ADV_COUPLING_INFO,
    PAGE_ID_CH_SETTINGS_INFO,
    PAGE_ID_SYS_SETTINGS,
    PAGE_ID_SYS_SETTINGS2,
    PAGE_ID_SYS_SETTINGS_AUX_OTP,
    PAGE_ID_SYS_SETTINGS_DATE_TIME,
    PAGE_ID_SYS_SETTINGS_PROTECTIONS,
    PAGE_ID_SYS_SETTINGS_CAL,
    PAGE_ID_SYS_SETTINGS_CAL_CH,
    PAGE_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP,
    PAGE_ID_SYS_SETTINGS_CAL_CH_WIZ_FINISH,
    PAGE_ID_SYS_SETTINGS_SOUND,
    PAGE_ID_SYS_SETTINGS_DISPLAY,
    PAGE_ID_SYS_SETTINGS_DIAG,
    PAGE_ID_SYS_SETTINGS_SCREEN_CALIBRATION,
    PAGE_ID_SYS_SETTINGS_ETHERNET,
    PAGE_ID_USER_PROFILES,
    PAGE_ID_USER_PROFILES2,
    PAGE_ID_USER_PROFILE_SETTINGS,
    PAGE_ID_USER_PROFILE_0_SETTINGS,
    PAGE_ID_SYS_INFO,
    PAGE_ID_SYS_INFO2,
    PAGE_ID_ENTERING_STANDBY,
    PAGE_ID_STANDBY
};

extern const uint8_t *fonts[];

struct Bitmap {
    uint16_t w;
    uint16_t h;
    const uint8_t *pixels PROGMEM;
};

extern Bitmap bitmaps[];

extern const uint8_t styles[];

extern const uint8_t document[];

}
}
} // namespace eez::psu::gui
