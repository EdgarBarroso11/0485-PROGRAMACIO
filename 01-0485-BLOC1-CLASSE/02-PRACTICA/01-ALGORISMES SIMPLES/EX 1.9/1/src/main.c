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
	
	int num, variable=0;

	do
	{
		printf("Introdueix un nombre: ");
		scanf("%d",&num);
	} while (num<0);
	
	for (int i = 0; i <=num ; i++)
	{
		variable = variable + i;	
	}
	
	printf("La suma des de l'1 fins %d es %d", num, variable);
	acabament();
	return 0;
}
