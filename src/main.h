#ifndef _main_H
#define _main_H

// ###########################################################################################################################################
// # declaration of functions used in main
// ###########################################################################################################################################

void checkClient(void);
int checkRTC(void);
void ClockRestart(void);
void ClockWifiReset(void);
void configNTPTime(void);
void DayNightMode(int displayonMin, int displayonMax);
byte decToBcd(byte val);
void defaultText(void);
void DisplayTest(void);
void dunkel(void);
void esphttpupdate(void);
unsigned char h2int(char c);
void handleRoot(void);
void handleTime(void);
void ledsOFF(void);
void ledsON(void);
void LedStatus(void);
int ledXY(int x, int y);
void PingIP(void);
void printAt(int ziffer, int x, int y);
void readEEPROM(void);
void readhttpfile(void);
void rtcReadTime(void);
void rtcWriteTime(int jahr, int monat, int tag, int stunde, int minute, int sekunde);
void setLED(int ledNrFrom, int ledNrTo, int switchOn);
void setLEDHour(int ledNrFrom, int ledNrTo, int switchOn);
void setLEDLine(int xFrom, int xTo, int y, int switchOn);
void SetWLAN(void);
void showCurrentDate(void);
void showCurrentTime(void);
void showDCW(void);
void showIP(void);
void showMinutes(int minutes);
void ShowTheTime(void);
void update_error(int err);
void update_finished(void);
void update_msg_LEDs(int redCol, int greenCol, int blueCol);
void update_progress(int cur, int total);
void update_started(void);
String urldecode(String str);
void WIFI_DebugWifiLEDs(uint32_t color);
void WIFI_login(void);
void writeEEPROM(void);


#endif