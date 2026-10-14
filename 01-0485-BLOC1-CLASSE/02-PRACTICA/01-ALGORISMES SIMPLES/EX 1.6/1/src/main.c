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
	
	int mes;

	printf("Introdueix un mes del 1 al 12: ");
	scanf("%d",&mes);

	switch (mes)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("El mes introduit té 31 dies");		
		break;
	case 2:
		printf("El mes introduit té 28 dies");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("El mes introduit té 30 dies");
		break;
	default:
		printf("Has introduit un numero incorrecte");
		break;
	}

	acabament();
	return 0;
}
