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
	int numero, contadorparells=0, contadorsenars=0, sumaparells=0, sumasenars=0;

	for (int i = 1; i <= 10; i++)
	{
		printf("Introdueix el numero (%d): ",i);
		scanf("%d",&numero);

		if (numero%2==0)
		{
			contadorparells=contadorparells+1;
			sumaparells=numero+sumaparells;
		}
		else
		{
			contadorsenars=contadorsenars+1;
			sumasenars=sumasenars+numero;
		}
	}
	printf("\nTotal numero parells: %d", contadorparells);
	printf("\nSuma numeros parells: %d",sumaparells);
	printf("\nTotal numero senars: %d", contadorsenars);
	printf("\nSuma numeros senars: %d",sumasenars);
	


	acabament();
	return 0;
}
