#include <TestLib.h>
unsigned long updateInterval = 2000;
unsigned long lastUpdate = 0;
int counter = 0;

void TestLib::init(){
  initialized = true;
  //Load Settings
  //Initialize Hardware
  //Etc
}
void TestLib::loop(){
  if(!initialized)return;
  //Do device specific tasks
  //Update a Blynk virtual pin for testing purposes
  if(millis() > lastUpdate+updateInterval){
    // Blynk.virtualWrite(V2, counter++);              //Causes 'Blynk' was not declared in this scope.  Not sure what to include to correct this.
  }
}

//Handle user write operations to Virtual pins
BLYNK_WRITE(V0){
  //React to V0 Write
}
BLYNK_WRITE(V1){
  //React to V1 Write
}
//etc
