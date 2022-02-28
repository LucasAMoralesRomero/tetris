#ifndef L_H
#define L_H
#include "Pieza.h"

class L : public Pieza{
public:
	L(int _x, int _y): Pieza(_x,_y){
		MatrizPieza = Matriz;
	}
	
	
	
private:
	int x;
	int y;
	char a = 'o';
	char o = 32;
	char Matriz[4][4]//pieza de A x B
	{
		{o,a,o,o,},
		{o,a,o,o,},
		{o,a,o,o,},
		{o,a,a,a,}
	};
};

#endif

