#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	
	for (int y1 = 1; y1 <= 3; y1++)
	{
		for (int x1 = 1; x1 <= 60; x1++)
		{
			setColor(RED);
			gotoxy(x1,y1);
			printf("█");
		}
	}
	for (int y1 = 4; y1 <= 6; y1++)
	{
		for (int x1 = 1; x1 <= 60; x1++)
		{
			setColor(WHITE);
			gotoxy(x1,y1);
			printf("█");
		}
	}
	for (int y1 = 7; y1 <= 9; y1++)
	{
		for (int x1 = 1; x1 <= 60; x1++)
		{
			setColor(GREEN);
			gotoxy(x1,y1);
			printf("█");
		}
	}



	for (int y1 = 12; y1 <= 24; y1++)
	{
		for (int x1 = 1; x1 <= 10; x1++)
		{
			setColor(GREEN);
			gotoxy(x1,y1);
			printf("█");
		}
	}
	for (int y1 = 12; y1 <= 24; y1++)
	{
		for (int x1 = 11; x1 <= 35; x1++)
		{
			setColor(WHITE);
			gotoxy(x1,y1);
			printf("█");
		}
	}
	for (int y1 = 12; y1 <= 24; y1++)
	{
		for (int x1 = 36; x1 <=60; x1++)
		{
			setColor(RED);
			gotoxy(x1,y1);
			printf("█");
		}
	}
	acabament();
	return 0;
}
