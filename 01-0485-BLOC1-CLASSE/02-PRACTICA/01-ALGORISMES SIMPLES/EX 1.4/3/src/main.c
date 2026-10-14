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

	printf("Introdueix un num del 1 al 5: ");
	scanf("%d", &dia);
	while(getchar()!='\n');

	if (dia==1)
	{
		printf("\nEl dia %d es dilluns.", dia);
	}
	else if (dia==2)
	{
		printf("\nEl dia %d es dimarts.", dia);
	}
	else if (dia==3)
	{
		printf("\nEl dia %d es dimecres.", dia);
	}
	else if (dia==4)
	{
		printf("\nEl dia %d es dijous.", dia);
	}
	else if (dia==5)
	{
		printf("\nEl dia %d es divendres.", dia);
	}
	else
	{
		printf("\nEl dia %d no es valid.", dia);
	}

	acabament();
	return 0;
}
