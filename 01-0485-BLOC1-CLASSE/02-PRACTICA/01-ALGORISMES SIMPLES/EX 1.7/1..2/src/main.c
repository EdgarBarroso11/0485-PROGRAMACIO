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
	
	int num, cont1=0, cont2=0;

	printf("Introdueix un numero positiu: ");
	scanf("%d",&num);


	while (num<0)
	{
		printf("\nERROR, Introdueix un numero positiu: ");
		scanf("%d",&num);
		while(getchar()!='\n');
		cont1=1+cont1;
	}
	printf("\nNumero correcte (while). Numero de vegades: %d",cont1);

	do
	{
		printf("\nTorna a introduir un numero positiu: ");
		scanf("%d",&num);
		while(getchar()!='\n');
		cont2=1+cont2;
	} while (num<0);
	
	printf("Numero correcte (do while). Numero de vegades: %d", cont2);

	acabament();
	return 0;
}
