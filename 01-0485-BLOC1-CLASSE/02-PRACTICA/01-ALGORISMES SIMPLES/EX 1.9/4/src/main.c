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
	
	int variable=0,numero;
	float suma;

	do
	{
		
		printf("\nIntroduiex el numero: ");
		scanf("%d",&numero);
		
		if (numero!=-1)
		{
			suma=numero+suma;
			variable++;
		}

	} while (numero!=-1);
	
	if (variable==0)
	{
		printf("\nNo s'ha introduit cap numero valid");
	}
	else
	{
		suma=suma/variable;
		printf("La mitjana es: %f",suma);
	}

	acabament();
	return 0;
}
