#include "Arduino.h"
#include "GasValve.h"

GasValve::GasValve(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  digitalWrite(_pin, LOW);
}

void GasValve::open()
{
    digitalWrite(_pin, HIGH);
}

void GasValve::close()
{
    digitalWrite(_pin, LOW);
}
