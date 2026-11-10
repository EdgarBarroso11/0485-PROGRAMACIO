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
	system("mode con: cols=175 lines=40");
	
	int amplada, alcada, xTorreRand,yTorreRand,direccioTorre,x,y,dormir=200;
	tamanyPantalla(&amplada,&alcada);

	for (y = 1; y <= alcada-3; y++)
	{
		for (x = 3; x <= amplada-2; x++)
		{
			if (x%2==1)
			{
				gotoxy(x,y);
				printf(".");
			}
		}
	}
	
	do
	{
		xTorreRand=rand() % ((amplada-2)-3+1)+3;
	} while (xTorreRand%2==0);
	
	do
	{
		yTorreRand=rand() % ((alcada-2)-1+1)+1;
	} while (yTorreRand%2==0);
	

	gotoxy(xTorreRand,yTorreRand);
	setColor(BLUE);
	printf("T");
	
	
	
	
	direccioTorre=rand()%4;
	
	if (direccioTorre==0)//ESQUERRA
	{
		do
		{
			Sleep(dormir);
			xTorreRand=xTorreRand-2;
			gotoxy(xTorreRand,yTorreRand);
			printf("T");
		} while (xTorreRand>3);
	}
	else if(direccioTorre==1)//DRETA
	{
		do
		{
			Sleep(dormir);
			xTorreRand=xTorreRand+2;
			gotoxy(xTorreRand,yTorreRand);
			printf("T");
		} while (xTorreRand<amplada-2);
	}
	else if(direccioTorre==2)//AMUNT
	{
		do
		{
			Sleep(dormir);
			yTorreRand=yTorreRand-1;
			gotoxy(xTorreRand,yTorreRand);
			printf("T");
		} while (yTorreRand>1);
	}
	else
	{
		do
		{
			Sleep(dormir);
			yTorreRand=yTorreRand+1;
			gotoxy(xTorreRand,yTorreRand);
			printf("T");
		} while (yTorreRand<alcada-3);
	}

	direccioTorre=rand()%4;
	
		
	
	setColor(WHITE);
	gotoxy(amplada-1,alcada-1);
	acabament();
	return 0;	
}

