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
	
	int cabalRiu1,y1=0,var=1,x1=0,x,y,numAleatori,hora=1;

	printf("BENVINGUTS AL SISTEMA DE REPRESENTACIO DELS RIUS DE VALLFORNERS");
	do
	{
		printf("\nIntrodueix la capacitat inicial del riu 1 (0-30): ");
		scanf("%d",&cabalRiu1);
	} while (cabalRiu1<0 || cabalRiu1>30);

	cls();
	
	for (y=35; y >= 5; y--)
	{	
		gotoxy(1,y);
		printf("%2d|",y1);
		y1++;
	}
	
	for (int i = 0; i < 2; i++)
	{
		if (i==0)
		{
			for (x = 4; x < 73; x++)
			{
				if (var==1)
				{
					gotoxy(x,35);
					printf("--|");
					var++;
				}
				else if (var==3)
				{
					var=1;
				}
				else
				{
					var++;
				}
			}
		}
		else 
		{
			var=1;
			x=3;
			for (x = 3; x < 74; x++)
			{
				if (var==1)
				{
					gotoxy(x,36);
					printf("%d",x1);

					numAleatori = rand() % 2;

					if (numAleatori==0)
					{
					cabalRiu1=cabalRiu1+rand()%11*cabalRiu1/100;
					}
					else if (numAleatori==1)
					{
						cabalRiu1=(float)cabalRiu1-rand()%11*(float)cabalRiu1/100;
					}
							
					gotoxy(x,35-cabalRiu1);
					printf("%d",cabalRiu1);
					var++;
					x1++;
				}
				else if (var==3)
				{
					var=1;
				}
				else
				{
					var++;
				}
			}
		}

	}
	
	gotoxy(73,35);
	printf("--------------");
	gotoxy(83,36);
	printf("hora");
	

	

	
	

	
	gotoxy(1,40);
	acabament();
	return 0;
}
