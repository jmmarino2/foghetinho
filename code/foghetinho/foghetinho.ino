/*
   FOGHETINHO
   José Manuel Mariño Mariño
   v0.0
  
   Programado para ser implementado en un ATTiny85 o equivalente
  
   //ASIGNACION PINES SENSORES
   LEFT:     6
   RIGHT:    2
   //ASIGNACION PINES PARA SERVO DIRECCION
   DIR: 10
 */

#include "foghetinho.h"
foghetinho Foghetinho(2, 7, 10);

void setup() 
{
  Foghetinho.Init();
}

void loop() 
{
  Foghete.Go();
} 
