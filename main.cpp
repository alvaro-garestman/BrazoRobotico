#include "brazoRobico.h"
#include <iostream>
using namespace std

int main (){
	BrazoRobotico brazo;

	brazo.mover(2.0, 4.0, 1.0);
	brazo.coger();
	cout <<"Esta sujetando un objeto? =>" << brazo.getSujetando() << endl;
	cout <<"Posicion actual: X " << brazo.getX() << "Y: " << brazo.getY() << "Z: " << brazo.getZ() << endl;

	return 0;
}

	
