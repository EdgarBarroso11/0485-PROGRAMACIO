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

	printf("Introdueix un mes de l'any (0-12): ");
	scanf("%d", &mes);
	while(getchar()!='\n');

	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
	{
		printf("El mes %d te 31 dies.", mes);
	}
	else if (mes==4 || mes==6 || mes==9 || mes==11)
	{
		printf("El mes %d te 30 dies.", mes);
	}
	else if (mes==2)
	{
		printf("El mes %d te 28 dies.", mes);
	}
	else
	{
		printf("Número incorrecte.");
	}

	acabament();
	return 0;
}
