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
	
	int num, cont=0;

	do
	{
		printf("\nIntrodueix un numero: ");
		scanf("%d",&num);
		while(getchar()!='\n');
		if (num%2==0)
		{
			cont=cont+1;
			printf("\n%d numero parell introduit.", cont);
		}
		else
		{
			cont=0;
		}
	} while (cont<5);
	
	printf("\nS'han introduit els 5 numeros parells.");

	acabament();
	return 0;
}
