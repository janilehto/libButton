#include "Button.h"

Button S1(12);

void setup(){
  Serial.begin(9600);
}

void loop(){
  if(S1.pressed()){
    Serial.println("Jep");
  }
}
