#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
// ----funciones----
#include <windows.h>

void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition (hcon, dwPos);
}
    void lim()
{
	system("cls");
}
    void xy(int f, int c)
{
	gotoxy(c,f);
}
    void le(char men[40]) //le = letrero
{
	printf(men);
}

float cf(char men[40]) //cf = captura de un valor flotante
{
	float v;
	le(men);scanf("%f",&v);return v;
}

int ci(char men[40]) //ci = captura de un valor entero
{
	int v;
	le(men);
	scanf("%i",&v);
	return v;
}

void lf(char men[40],float va) //lf = letrero y valor flotante
{
	le(men);
	printf("%.2f",va);	
}

void li(char men[40],int va) //li = letrero y valor entero
{
	le(men);
	printf("%i",va);
}

