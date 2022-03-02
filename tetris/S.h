#ifndef S_H
#define S_H
#include "Pieza.h"

class S : public Pieza{
public:
	S(int _x, int _y): Pieza(_x,_y){
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
			{o,o,o,o,},
			{o,o,a,a,},
			{o,a,a,o,},
			{o,o,o,o,}
		};
};

#endif

