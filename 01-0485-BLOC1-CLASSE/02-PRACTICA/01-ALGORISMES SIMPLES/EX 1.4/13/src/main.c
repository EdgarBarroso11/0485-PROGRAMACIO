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
	
	int dia;
	float diners, canvi;

	printf("Introdueix el dia de la setmana: ");
	scanf("%d", &dia);

	if(dia<1 || dia>7)
	{
		printf("Dia incorrecte.");
	}
	else
	{
		printf("Introdueix que pagues: ");
		scanf("%f", &diners);

		if (dia<6 && diners>10)
		{
			canvi= diners-10;
			printf("Sr client, el teu canvi %.2f€", canvi);
		}
		else if (dia<6 && diners==10)
		{
			printf("Bon dia Sr client.");
		}
		else if (dia>5 && diners>14)
		{
			canvi=diners-14;
			printf("Sr client, el teu canvi %.2f€", canvi);
		}
		else if (dia>5 && diners==14)
		{
			printf("Bon dia Sr client.");
		}
		else if (dia<6 && diners<10)
		{
			canvi=10-diners;
			printf("Sr client falten %.2f€", canvi);
		}
		else if (dia>5 && diners<14)
		{
			canvi=14-diners;
			printf("Sr client falten %.2f€", canvi);
		}
		else 
		{
			printf("Els diners introduits son incorrectes.");
		}
	}

	acabament();
	return 0;
}
