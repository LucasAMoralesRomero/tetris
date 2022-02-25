#include<iostream>
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include "Graphics.h"
using namespace std;

int main (int argc, char *argv[]) {
	Graphics Gr;
	Gr.OcultarCursor();
	Gr.PintarLimites();
	Gr.Gotoxy(5,15);
	cout<<"hola";
	Gr.Gotoxy(1,36);
	return 0;
}

