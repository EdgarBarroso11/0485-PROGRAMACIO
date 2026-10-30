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
	
	int posicioX,posicioX1,posicioY,posicioY1,numCreus,numLinies,separacio;
	int u;
	printf("Introdueix la posicio inicial en x:");
	scanf("%d",&posicioX);
	printf("Introdueix la posicio inicial en y:");
	scanf("%d",&posicioY);
	printf("Introdueix quantes creus vols en una linia vertical:");
	scanf("%d",&numCreus);
	printf("Introdueix quants cops es repetira la linia vertical:");
	scanf("%d",&numLinies);
	printf("Introdueix quina es la separacio entre linies verticals:");
	scanf("%d",&separacio);

	cls();
	posicioX1=posicioX;
	posicioY1=posicioY;
	for ( posicioX1; posicioX1 <= ((numLinies-1)*separacio)+numLinies+posicioX-1; posicioX1=posicioX1+separacio+1)
	{
		for (posicioY1; posicioY1 < posicioY+numCreus; posicioY1++)
		{
			gotoxy(posicioX1,posicioY1);
			printf("X");			
			Sleep(100);
			
		}
		posicioY1=posicioY;
	}
		acabament();
	return 0;
}

