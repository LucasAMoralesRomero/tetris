#ifndef TABLERO_H
#define TABLERO_H
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include <vector>

using namespace std;
class Tablero{
public:
		Tablero(){}
		
		void DibujarTablero(){
			
			for (int i=0; i<22; i++)
		{
			for (int j=0; j<12; j++)
			{
				printf("%c",TableroJuego[i][j]);
			}
			cout << endl;
		}
		}
		
	
private:
	char a = 219;
	char o = 32;
	char p = 220;
	char TableroJuego[22][12]//tablero del juego de 20 x 10
	{
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,o,o,o,o,o,o,o,o,o,o,a,},
	{a,p,p,p,p,p,p,p,p,p,p,a,}
	};	
};
#endif
