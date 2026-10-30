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
	int x,y,var=1;
	int y1,x1;
	printf("Introdueix l'alcada: ");
	scanf("%d",&y);

	printf("Introdueix l'amplada: ");
	scanf("%d",&x);

	cls();

	for (x1 = 1; x1 <= x; x1++)
	{
		gotoxy(x1,y1);
		printf("X");
		Sleep(100);
		if (x1==x && var==1)
		{
			x1=0;
			y1=y;	
			var++;
		}
	}

	x1=1;
	y1=1;
	var=1;
	
	for (y1 = 1; y1 <= y; y1++)
	{
		gotoxy(x1,y1);
		printf("X");
		Sleep(100);
		if (y1==y && var==1)
		{
			x1=x;
			y1=0;	
			var++;
		}
	}
	
	

	
	acabament();
	return 0;
}
