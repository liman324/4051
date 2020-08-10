#include <HEF4051.h>

HEF4051::HEF4051(uint8_t pin_a, uint8_t pin_0, uint8_t pin_1, uint8_t pin_2){
  PIN_A = pin_a;
  PIN_0 = pin_0;
  PIN_1 = pin_1;
  PIN_2 = pin_2;
  
  pinMode(pin_a,INPUT); // A0
  pinMode(pin_0,OUTPUT); // Y0
  pinMode(pin_1,OUTPUT); // Y1
  pinMode(pin_2,OUTPUT); // Y2
}

int HEF4051::Read(int adc){
 switch(adc){
    case 0: digitalWrite(PIN_2,LOW);digitalWrite(PIN_1,LOW);digitalWrite(PIN_0,LOW);break;
    case 1: digitalWrite(PIN_2,LOW);digitalWrite(PIN_1,LOW);digitalWrite(PIN_0,HIGH);break;
    case 2: digitalWrite(PIN_2,LOW);digitalWrite(PIN_1,HIGH);digitalWrite(PIN_0,LOW);break;
    case 3: digitalWrite(PIN_2,LOW);digitalWrite(PIN_1,HIGH);digitalWrite(PIN_0,HIGH);break;
    case 4: digitalWrite(PIN_2,HIGH);digitalWrite(PIN_1,LOW);digitalWrite(PIN_0,LOW);break;
    case 5: digitalWrite(PIN_2,HIGH);digitalWrite(PIN_1,LOW);digitalWrite(PIN_0,HIGH);break;
    case 6: digitalWrite(PIN_2,HIGH);digitalWrite(PIN_1,HIGH);digitalWrite(PIN_0,LOW);break;
    case 7: digitalWrite(PIN_2,HIGH);digitalWrite(PIN_1,HIGH);digitalWrite(PIN_0,HIGH);break;
    }
    int value = analogRead(PIN_A);
  //  delay(1);
    return value;
  }
