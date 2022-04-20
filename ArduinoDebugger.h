#ifndef DEBUGGER_H
#define DEBUGGER_H

//#define DEBUG_SERIAL Serial

/*
*   For debuging.
*/
#ifdef EN_DEBUG
#define DEBUGLF(x) DEBUG_SERIAL.println(F(x))
#define DEBUGL2(x, y) DEBUG_SERIAL.print(F(x)); Serial.println(y)
#define DEBUGX(...) DEBUG_SERIAL.printf(__VA_ARGS__)
#define DEBUGF(x) DEBUG_SERIAL.print(F(x))
#define DEBUG(x) DEBUG_SERIAL.print(x)
#define DEBUGLP(x, y) DEBUG_SERIAL.print(x, y)
#else
#define DEBUGL(x) while(false)
#define DEBUGL2(x, y) while(false)
#define DEBUGX(...) while(false)
#define DEBUGF(x) while(false)
#define DEBUG(x) while(false)
#define DEBUGLP(x) while(false)
#endif

#endif