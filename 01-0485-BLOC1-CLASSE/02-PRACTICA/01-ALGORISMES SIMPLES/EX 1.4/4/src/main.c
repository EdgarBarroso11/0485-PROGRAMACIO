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
	
	int dia, temps;

	printf("Introdueix un dia de la setmana (1-7): ");
	scanf("%d", &dia);
	while(getchar()!='\n');

	printf("Introdueix si plou o no (0-1): ");
	scanf("%d", &temps);

		if ((dia==1 || dia==5 || dia==3) && temps==1)
		{
			printf("L'entreno es fa fora del pabelló.");
		}
		else if ((dia==1 || dia==5 || dia==3) && temps==0)
		{
			printf("L'entreno es fara en el pabelló.");
		}
		else
			printf("No hi ha entrenament.");

	acabament();
	return 0;
}
