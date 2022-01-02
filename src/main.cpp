#include <Arduino.h>

//golbal variables

int counter = 10;

float errorValue = 0.123456F;

float result = 0.00F;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  counter++;

  result = counter + errorValue;

  Serial.print("Result :");

  Serial.println(result);
  
  delay(1000);
}