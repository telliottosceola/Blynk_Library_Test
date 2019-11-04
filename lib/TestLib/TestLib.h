#ifndef TESTLIB_H
#define TESTLIB_H

// #include "BlynkProvisioning.h"

#include "Blynk/BlynkHandlers.h"
// #include "Blynk/BlynkApi.h"
// #include <Blynk/BlynkProtocolDefs.h>
// #include "BlynkSimpleEsp32.h"

class TestLib{
public:
  void init();
  void loop();
private:
  bool initialized = false;
};
#endif
