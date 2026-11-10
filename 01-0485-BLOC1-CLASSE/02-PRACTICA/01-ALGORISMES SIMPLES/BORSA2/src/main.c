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
	
	int cotitzacioMinima,cotitzacioMaxima,cotitzacioPrimera,y1=40,y2=40,x=4,x2=3,num=0;
	do
	{
		printf("Introdueix cotitzacio minima (0..10): ");
		scanf("%d",&cotitzacioMinima);
		while(getchar()!='\n');
	} while (cotitzacioMinima<0||cotitzacioMinima>10);
	
	do
	{
		printf("Introdueix cotitzacio maxima (30..40): ");
		scanf("%d",&cotitzacioMaxima);
		while(getchar()!='\n');
	} while (cotitzacioMaxima<30||cotitzacioMaxima>40);
	
	do
	{
		printf("Introdueix cotitzacio inicial (%d..%d): ",cotitzacioMinima,cotitzacioMaxima);
		scanf("%d",&cotitzacioPrimera);
		while(getchar()!='\n');
	} while (cotitzacioPrimera<cotitzacioMinima||cotitzacioPrimera>cotitzacioMaxima);

	cls();
	for (int y = 1; y < 41; y++)
	{
		gotoxy(1,y);
		printf("%2d|",y1);
		y1--;
	}

	gotoxy(x2,y2+1);
	printf("%d",num);
	x2=x2+5;
	num=num+5;

	for (int i = 0; i < 12; i++)
	{
		gotoxy(x,y2);
		printf("----|");
		x=x+5;

		gotoxy(x2,y2+1);
		printf("%d",num);
		x2=x2+5;
		num=num+5;
	}
	
	gotoxy(x,y2);
	printf("--------->");
	gotoxy(x+9,y2+1);
	printf("dia");

	for ( int xMax = 4; xMax < 64; xMax++)
	{
		setColor(BLUE);
		gotoxy(xMax,41-cotitzacioMaxima);
		printf("-");
	}
	for ( int xMax = 4; xMax < 64; xMax++)
	{
		setColor(RED);
		gotoxy(xMax,41-cotitzacioMinima);
		printf("-");
	}
	
	getchar();
	
	for (int x60 = 4; x60 < 64; x60++)
	{
		gotoxy(x60,41-cotitzacioPrimera);

		if (cotitzacioPrimera>cotitzacioMaxima)
		{
			setColor(BLUE);
		}
		else if (cotitzacioPrimera<cotitzacioMinima)
		{
			setColor(RED);
		}
		else
		{
			setColor(WHITE);
		}
		printf("*");
		cotitzacioPrimera=cotitzacioPrimera + (rand() % 5-2);
		Sleep(200);
	}

	gotoxy(4,45);
	acabament();
	return 0;
}
