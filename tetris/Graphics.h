#ifndef GRAPHICS_H
#define GRAPHICS_H
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>

class Graphics {
public:
	Graphics(){
		
	}
	void OcultarCursor(){
		HANDLE hCon;
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cci;
		cci.dwSize = 2;
		cci.bVisible = FALSE;
		SetConsoleCursorInfo(hCon, &cci);
	}
	void Gotoxy(int x, int y){//funcion que emula gotoxy de biblioteca borlandC
		HANDLE hCon;
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD xyPos;
		xyPos.X = x;
		xyPos.Y = y;
		SetConsoleCursorPosition(hCon, xyPos);
	}
private:
};

#endif

