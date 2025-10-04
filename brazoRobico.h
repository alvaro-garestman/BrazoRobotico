#ifndef BRAZOROBICO_H
#define BRAZOROBICO_H

class BrazoRobotico (){
	private:
		int x;
		int y;
		int z;
		bool sujetado;
	public
		BrazoRobotico ();
		int getX();
		int getY();
		int getZ();
		void coger();
		void soltar();
		void mover(double _x, double _y, double _z);
	};
#endif
