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
	
	float a, b, divisio;

	printf("Introdueix dos nombres: ");
	scanf("%f %f", &a, &b);
	while(getchar()!='\n');

	if(b==0)
	{
		printf("\nEl valor no pot ser zero");
	}
	else
	{
		printf("\nEl valor del divisor es correcte.");
		divisio=a/b;
		printf("\nEl resultat es: %d", divisio);
	}


	acabament();
	return 0;
}
