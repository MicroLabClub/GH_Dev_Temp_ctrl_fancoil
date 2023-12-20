#ifndef ECU_CONFIG_CTRL_LIGHTS_H_
#define ECU_CONFIG_CTRL_LIGHTS_H_

#define USE_CTRL_LIGHT
#define USE_OS_SEQ_TASK
#define USE_SRV_UI_SERIAL
#define USE_SRV_COM_MQTT
#define USE_DD_LIGHTS
#define USE_ED_RELAY
// #define USE_SRV_SNS_AIR_TEMP
// #define USE_ED_DHT


#define CTRL_LIGHT_REC (20 * TIME_SEC)
#define CTRL_LIGHT_OFFSET 20

#define TERMINAL_IN_REC (1 / SYS_TICK)
#define TERMINAL_IN_OFFSET 4

#define TERMINAL_OUT_REC (2 * TIME_SEC)
#define TERMINAL_OUT_OFFSET 5

#define DD_LUGHTS_REC (100 / SYS_TICK)
#define DD_LUGHTS_OFFSET 14

#define ED_RELAY_REC (100 / SYS_TICK)   
#define ED_RELAY_OFFSET 5


#define DD_WIN_OP_D_TIME (4 * TIME_SEC / DD_WINDOW_REC)
#define TEMP_VENT_HISTERESIS (0.5)
#define TEMP_DEFAULT (10.0)

#define ED_RELAY_1_PIN 0 //GPIO1


#endif