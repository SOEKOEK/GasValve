#ifndef GasValve_h
#define GasValve_h

#include "Arduino.h"

class GasValve
{
  public:
    GasValve(int pin);
    void open();
    void close();

  private:
    int _pin;

};

#endif
