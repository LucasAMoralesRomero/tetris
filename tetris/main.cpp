#include<iostream>
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include "Graphics.h"
#include "Tablero.h"
#include "Pieza.h"
#include "L.h"
#include "Game.h"


using namespace std;

int main (int argc, char *argv[]) {
	/*Graphics Gr;
	Tablero Tab;
	Gr.OcultarCursor();
	L Pi(2,2);
	Tab.DibujarTablero();
	Pi.DibujarPieza();
	/*Gr.PintarLimites(); //por el momento no se implementara Graphics.PintarLimites(), se implementara en proxima version
	Gr.Gotoxy(5,15);
	cout<<"hola";
	Gr.Gotoxy(0,4);
	Tab.DibujarTablero();
	Gr.Gotoxy(0,5);
	Pi.DibujarPieza();
	+Gr.Gotoxy(0,4);
	
	Tab.DibujarTablero();
	cout << "dibuje";
	
	bool Game_Over = false;
	
	while(!Game_Over)
	{
		Pi.MoverFicha();
		Tab.PintarLimites();
		Sleep(5);
		Gr.Gotoxy(20,5);
		cout<<"pos Y: "<<Pi.getY();
		if(Pi.getY() == 15)
		{
			Pi.setY(2);
		}
	}
	*/
	
	Game Juego;
	Juego.StartGame();
	return 0;
}

