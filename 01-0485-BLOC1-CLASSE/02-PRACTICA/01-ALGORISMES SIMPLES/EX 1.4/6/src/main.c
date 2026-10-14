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
	
	char caracter;

	printf("Introdueix un caracter: ");
	scanf("%c", &caracter);

	if (caracter >=65 && caracter <=90)
	{
		printf("El caracter %c es una lletra majuscula.", caracter);
	}
	else if (caracter >=97 && caracter<=122)
	{
		printf("El caracter %c es una lletra minuscula.", caracter);
	}
	else if(caracter>=48 && caracter<=57)
	{
		printf("El caracter %c es un digit.", caracter);
	}
	else
	{
		printf("El caracter %c no es ni majuscula, minuscula ni digit.", caracter);
	}
	

	acabament();
	return 0;
}
