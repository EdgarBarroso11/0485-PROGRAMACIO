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
	
	int amplada, alcada;
	int amplada2,alcada2,x2=1,diagonal1,diagonal2;
	
	tamanyPantalla(&amplada,&alcada);


	for (int i = 1; i <= 2; i++)
	{
		if (i==1)
		{
			amplada2=1;
			alcada2=1;
		}
		else
		{
			amplada2=alcada;
			alcada2=alcada;
		}
		
		for (int x = 1; x <= alcada; x++)
		{
			gotoxy(x,amplada2);
			printf("X");
			Sleep(10);
		}

		for (int y = 1; y < alcada; y++)
		{
			gotoxy(alcada2,y);
			printf("X");
			Sleep(10);
		}
	}


	for (diagonal1 = 1; diagonal1 < alcada; diagonal1++)
	{
		gotoxy(x2,diagonal1);
		printf("X");
		Sleep(10);
		x2++;
	}
	
	for (diagonal2 = 1; diagonal2 < alcada; diagonal2++)
	{
		gotoxy(x2,diagonal2);
		printf("X");
		Sleep(10);
		x2--;
	}


	

	
	
	

	
	
	printf("\n");
	acabament();
	return 0;
}
