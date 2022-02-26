#include<iostream>
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include "Graphics.h"
#include "Tablero.h"
using namespace std;

int main (int argc, char *argv[]) {
	Graphics Gr;
	Tablero Tab;
	Gr.OcultarCursor();
	//Gr.PintarLimites();
	Gr.Gotoxy(5,15);
	cout<<"hola";
	Gr.Gotoxy(0,4);
	Tab.DibujarTablero();
	
	return 0;
}

