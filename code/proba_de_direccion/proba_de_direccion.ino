/*
   FOGHETINHO_TEST
   José Manuel Mariño Mariño
   v0.0
  
   Programado para ser implementado en un ATTiny85
  
   DIR: 10
 */

#include "foghetinho_test.h"
foghetinho_test Foghetinho(10);

void setup()
{
  Foghetinho.Init();
}

void loop()
{
  Foghetinho.Left();
  delay(2000);
  Foghetinho.Right();
  delay(2000);
}
