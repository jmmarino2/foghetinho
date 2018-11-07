#include <Servo.h>
#include "TCRT5000.h"

class foghetinho
{
private:
        D_TCRT5000 LSensor;
        D_TCRT5000 RSensor;
        Servo Direccion;

public:
	foghete(  int ls,
                  int rs,
                  int dir) : LSensor(ls), RSensor(rs), Direccion(dir) {}
	
	void Init();
	void Go();
}; 
