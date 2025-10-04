#include "brazoRobico.h"

	BrazoRobotico::BrazoRobotico(){
		x = 0;
		y = 0;
		z = 0;
		sujetado = false;
	}
	
	int BrazoRobotico::getX(){
		return x;
	}
	
	int BrazoRobotico::getY(){
		return y;
	}
	
	int BrazoRobotico::getZ(){
		return z;
	}
	
	bool BrazoRobotico::getSujetando(){
		return sujetando;
	}
	
	void BrazoRobotico::coger(){
		sujetando = true;
	}
	
	void BrazoRobotico::soltar(){
		sujetando = false;
	}
	
	void BrazoRobotico::mover(double _x, double _y, double _z){
		x = _x;
		y = _y;
		z = _z;
	}

