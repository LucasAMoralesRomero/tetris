#include<iostream>
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include "Graphics.h"
#include "Tablero.h"
#include "Pieza.h"
using namespace std;

int main (int argc, char *argv[]) {
	Graphics Gr;
	Tablero Tab;
	Pieza Pi;
	Gr.OcultarCursor();
	//Gr.PintarLimites(); //por el momento no se implementara Graphics.PintarLimites(), se implementara en proxima version
	Gr.Gotoxy(5,15);
	cout<<"hola";
	Gr.Gotoxy(0,4);
	Tab.DibujarTablero();
	Gr.Gotoxy(0,5);
	Pi.DibujarPieza();
	//+Gr.Gotoxy(0,4);
	
	//Tab.DibujarTablero();
	//cout << "dibuje";
	
	return 0;
}

