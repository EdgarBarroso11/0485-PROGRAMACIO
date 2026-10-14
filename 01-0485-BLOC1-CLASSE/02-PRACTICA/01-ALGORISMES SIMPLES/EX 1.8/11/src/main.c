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
	
	int amplada, separacio;

	separacio=amplada;
	do
	{
		printf("Introdueix l'amplada: ");
		scanf("%d",&amplada);
	} while (amplada<1 || amplada>19);
	

	for (int i = 0; i <= 99; i++)
	{
		if (i==separacio)
		{
			printf("\n%2d, ",i);
			separacio=separacio+amplada;
		}
		else
		{
			printf("%2d, ",i);
		}


	}
	

	acabament();
	return 0;
}
