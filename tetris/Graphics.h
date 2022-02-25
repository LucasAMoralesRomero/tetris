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
		
	void PintarLimites() {
			
		for(int i = 2; i < 78; i++)
			{
				//limite superior
				Gotoxy(i,3); 
				printf("%c",205);
				
				//limite inferior
				Gotoxy(i,33);
				printf("%c",205);
			}
		for(int i = 4; i < 33; i++)
			{
				//limite izquierda
				Gotoxy(2,i); 
				printf("%c",186);
				
				//limite central
				Gotoxy(30,i);
				printf("%c",186);
				
				//limite derecha
				Gotoxy(77,i); 
				printf("%c",186);
				
			}
			//pintar las esquinas
			Gotoxy(2,3);
			printf("%c",201);
			
			Gotoxy(2,33);
			printf("%c",200);
			
			Gotoxy(30,3);
			printf("%c",203);
			
			Gotoxy(77,3);
			printf("%c",187);
			
			Gotoxy(77,33);
			printf("%c",188);
			
			Gotoxy(30,33);
			printf("%c",202);
			
		}
		
private:
};

#endif

