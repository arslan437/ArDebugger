#define EN_DEBUG
#define DEBUG_SERIAL Serial

#include <ArDebugger.h>


void setup()
{
    #ifdef EN_DEBUG
    DEBUG_SERIAL.begin(115200);
    #endif

    DEBUGL("You can use this with String, variables"); //This is equal to Serial.println(x)
    DEBUGLF("Argument can only be String"); // This is equalent to Serial.println(F(x)) 
    
}

void loop()
{

}