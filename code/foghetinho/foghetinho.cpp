#include <Arduino.h> //Permite utilizar los comandos de Arduino
#include "foghetinho.h"

void foghetinho::Init()
{
  LSensor.Init();
  RSensor.Init();
  //El servo de dirección ya lo hemos inicializado en el constructor, pero aquí lo ponemos en dirección al frente.
  Direccion.write(90);
}


void foghetinho::Go()
{
  int lsensor = LSensor.Read();
  int rsensor = RSensor.Read();
  
  if ( ( lsensor == 0 ) && ( rsensor == 0 ) )        //Si no detectamos linea...
    {
    //... quiere decir que tenemos la linea en el centro de los sensores,
    //o bien estamos completamente perdidos...
    //Lo mejor es no hacer nada, con lo que seguira activa la orden anterior que le hayamos dado a los motores.
    //Deberiamos quitar todo el if, pero lo dejamos por motivos didacticos.
    }
  else if ( ( lsensor == 0 ) && ( rsensor == 1 ) )   //Si detectamos linea en el sensor derecho...
    {
    //... debemos girar a la derecha para corregir la trayectoria.
    Direccion.write(60);
    }
  else if ( ( lsensor == 1 ) && ( rsensor == 0 ) )   //Si detectamos linea en el sensor izquierdo...
    {
    //... debemos girar a la izquierda para corregir la trayectoria.
    Direccion.write(120);
    }
  else if ( ( lsensor == 1 ) && ( rsensor == 1 ) )   //Si detectamos linea en los dos sensores...
    {
    //... podria ser que tengamos los sensores demasiado juntos,
    //o podria ser que hemos cruzado una linea justo por la perpendicular.
    //Ante la duda seguimos adelante.
    Direccion.write(90);
    }
}
