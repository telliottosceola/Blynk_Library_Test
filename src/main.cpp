/*************************************************************
  This is a DEMO. You can use it only for development and testing.
  You should open Setting.h and modify General options.

  If you would like to add these features to your product,
  please contact Blynk for Businesses:

                   http://www.blynk.io/

 *************************************************************/

//#define USE_WROVER_BOARD
#define USE_CUSTOM_BOARD          // See "Custom board configuration" in Settings.h

#define APP_DEBUG        // Comment this out to disable debug prints

#define BLYNK_PRINT Serial


#include "TestLib.h"
#include "BlynkProvisioning.h"

TestLib testLib;

void setup() {
  delay(500);
  Serial.begin(115200);

  BlynkProvisioning.begin();

}

void loop() {
  // This handles the network and cloud connection
  BlynkProvisioning.run();
  if(Blynk.connected()){
    testLib.loop();
  }
}

BLYNK_CONNECTED(){
  testLib.init();
}
