#include <Arduino.h>

//golbal variables

int counter = 10;

float errorValue = 0.123456F;

float result = 0.00F;

void setup()
{
  Serial.begin(9600); // Setting up Serial communication
}

void loop()
{
  counter++; // counter = counter + 1

  result = counter + errorValue;

  Serial.print("Result :");

  Serial.println(result);

  delay(1000);
}