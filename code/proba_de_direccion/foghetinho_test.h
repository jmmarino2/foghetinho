#include <Servo.h>

class foghetinho_test
{  
  private:
  Servo Direccion;
  
  public:
  foghetinho_test(int DIR) : Direccion(DIR) {}
  void Init();
  void Left();
  void Right();
};
