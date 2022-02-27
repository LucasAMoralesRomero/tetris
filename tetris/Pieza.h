#ifndef PIEZA_H
#define PIEZA_H
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include <vector>

using namespace std;
class Pieza{
public:
	Pieza(){}
	//defino el tamaño de pieza
	void DibujarPieza(){
		
		for ( int i = 0; i<4; i++)
		{
			for (int j = 0; j<4; j++)
			{
				printf("%c",MatrizPieza[i][j]);
			}
			cout << endl;
		}
	}
		
		
private:
			char a = 'a';
			char o = 32;
			char MatrizPieza[4][4]//pieza de A x B
			{
				{o,a,o,o,},
				{o,a,o,o,},
				{o,a,o,o,},
				{o,a,o,o,}
			};	
};
#endif
