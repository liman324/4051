#include <HEF4051.h>

HEF4051 hef(A0,2,3,4);// analog_input, 0,1,2

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print("ADC_0 = "); Serial.println(hef.Read(0));
  Serial.print("ADC_1 = "); Serial.println(hef.Read(1));
  Serial.print("ADC_2 = "); Serial.println(hef.Read(2));
  Serial.print("ADC_3 = "); Serial.println(hef.Read(3));
  Serial.print("ADC_4 = "); Serial.println(hef.Read(4));
  Serial.print("ADC_5 = "); Serial.println(hef.Read(5));
  Serial.print("ADC_6 = "); Serial.println(hef.Read(6));
  Serial.print("ADC_7 = "); Serial.println(hef.Read(7)); 
  Serial.println();
   delay(1000);
}
