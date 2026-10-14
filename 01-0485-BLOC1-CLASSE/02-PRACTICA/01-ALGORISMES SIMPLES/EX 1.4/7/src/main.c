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
	
	int a, b, maxim;

	printf("Introdueix dos nombres: ");
	scanf("%d %d", &a, &b);
	while(getchar()!='\n');

	if (a>b)
	{
		maxim=a;
	}
	else if (b>a)
	{
		maxim=b;
	}
	else if (a==b)
	{
		maxim=a;
	}
	else 
	{
		printf("valor incorrecte.");
	}
	printf("El numero %d es el màxim.", maxim);
	acabament();
	return 0;
}
