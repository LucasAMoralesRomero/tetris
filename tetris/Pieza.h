#ifndef PIEZA_H
#define PIEZA_H
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include <vector>

#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ARRIBA 72


using namespace std;
class Pieza{
public:
	Pieza( int _x, int _y): x(_x),y(_y){}
	//defino el tamaño de pieza
	void DibujarPieza(){
		
		for ( int i = 0; i<4; i++)
		{
			Gotoxy(x, y+i);
			for (int j = 0; j<4; j++)
			{
				printf("%c",MatrizPieza[i][j]);
			}
			cout << endl;
		}
	}
		
	void MoverFicha(){
		if (kbhit())
		{
			char tecla = getch();
			BorrarRastro();
			if(tecla == IZQUIERDA && x>0) x--;
			if(tecla == DERECHA && x<9) x++;
			if(tecla == ABAJO && y<15) y++;
			if(tecla == ARRIBA && y>0) y--;
			DibujarPieza();
		}
	}
	
	
	void BorrarRastro(){
		for ( int i = 0; i<4; i++)
		{
			Gotoxy(x, y+i);
			for (int j = 0; j<4; j++)
			{
				printf(" ");
			}
			cout << endl;
		}
	}
	
	void Gotoxy(int x, int y){//funcion que emula gotoxy de biblioteca borlandC
		HANDLE hCon;
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD xyPos;
		xyPos.X = x;
		xyPos.Y = y;
		SetConsoleCursorPosition(hCon, xyPos);
	}

	// Setter
	void setY(int newY) {
		y = newY;
	}
	// Getter
	int getY() {
		return y;
		}
	
	char MatrizPieza[4][4]//pieza de A x B
	{
	{o,a,o,o,},
	{o,a,o,o,},
	{o,a,o,o,},
	{o,a,o,o,}
	};		
		
		
private:
		
			int x;
			int y;
			char a = 'a';
			char o = 32;
			
		
};
#endif
