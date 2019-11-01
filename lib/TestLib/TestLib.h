#ifndef TESTLIB_H
#define TESTLIB_H

#include "Blynk/BlynkHandlers.h"

class TestLib{
public:
  void init();
  void loop();
private:
  bool initialized = false;

};
#endif
