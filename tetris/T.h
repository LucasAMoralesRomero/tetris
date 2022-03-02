#ifndef T_H
#define T_H
#include "Pieza.h"

class T : public Pieza{
public:
	T(int _x, int _y): Pieza(_x,_y){
		for (int i = 0; i < 4; i++)
		{
			for(int b = 0; b < 4; b++)
			{
				MatrizPieza[i][b]=Matriz[i][b];
			}
		}
		
	}
	
	
	
private:
		int x;
		int y;
		char a = 'o';
		char o = 32;
		char Matriz[4][4]//pieza de A x B
		{
			{o,a,o,o,},
			{a,a,a,o,},
			{o,o,o,o,},
			{o,o,o,o,}
		};
};

#endif

