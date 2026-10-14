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
	
	int num;

	printf("Introdueix un numero natural: ");
	scanf("%d", &num);

	if (num%2==0)
	{
		printf("El numero %d es parell", num);
	}
	else if (num%2!=0)
	{
		printf("El numero %d es senar", num);
	}
	else 
	{
		printf("El numero %d introduit incorrecte",num);
	}

	

	acabament();
	return 0;
}
