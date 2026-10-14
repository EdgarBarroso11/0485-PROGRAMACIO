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
	
	char torn;
	int sou, seccio;

	printf("Introdueix el teu torn ('M','T','N'): ");
	scanf("%c",&torn);

	printf("Introdueix la teva secció (1/3): ");
	scanf("%d",&seccio);

	printf("Introdueix el teu sou: ");
	scanf("%d",&sou);

	if(torn=='M')
	{
		printf("El treballador es promou a la nova seccio");
	}
	else if (seccio=1 && sou<700)
	{
		printf("El treballador es promou a la nova seccio");
	}
	else
	{
		printf("El treballador no es promou a la nova seccio");
	}
	acabament();
	return 0;
}
