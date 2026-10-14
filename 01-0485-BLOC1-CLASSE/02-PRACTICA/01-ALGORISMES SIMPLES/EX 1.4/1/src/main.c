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

	
	printf("Introdueix un dia del 1 al 7: ");
	scanf("%d", &dia);

	

	if (dia == 1, 2, 3, 4, 5)
	{
		printf("\nEl dia %d es dia laborable", dia);
	}
	else if (dia==6, 7)
	{
		printf("\nEl dia %d es dia festiu", dia);
	}
	else 
	{
		printf("\nEl valor no es correcte.");
	}
	acabament();
	return 0;
}
