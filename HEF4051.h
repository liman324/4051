#include <Arduino.h>

#ifndef  HEF4051_H
#define  HEF4051_H

class  HEF4051
  {
    public: 

  HEF4051(uint8_t pin_a, uint8_t pin_0, uint8_t pin_1, uint8_t pin_2);
  Read(int);
  
    private:

  uint8_t PIN_A;
  uint8_t PIN_0;
  uint8_t PIN_1;
  uint8_t PIN_2;

  };
#endif
