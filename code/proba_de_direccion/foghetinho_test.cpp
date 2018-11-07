
#include "foghetinho_test.h"

void foghetinho_test::Init()
{
  Direccion.Init();
}

//Left hace girar el robot hacia la izquierda.

void foghetinho_test::Left()
{
  Direccion.write(60);
}

//Right hace girar el robot hacia la derecha.

void foghetinho_test::Right()
{
  Direccion.write(120);
}


