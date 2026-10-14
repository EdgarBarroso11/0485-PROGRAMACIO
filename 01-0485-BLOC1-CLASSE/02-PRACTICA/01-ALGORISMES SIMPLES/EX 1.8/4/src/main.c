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
	int primernum, segonnum;

	do
	{
		printf("Introdueix un caracter: ");
		scanf("%c",&caracter);
		while(getchar()!='\n');

	} while (caracter!='>' && caracter!='<');

	printf("Introdueix un primer num: ");
	scanf("%d",&primernum);
	while(getchar()!='\n');
	printf("Introdueix un segon num: ");
	scanf("%d",&segonnum);
	while(getchar()!='\n');

	if (primernum>segonnum && caracter=='>')
	{
		for (int cont=segonnum; cont<=primernum; cont++)
		{
			printf("\n%d",cont);
		}
	}
	else if (primernum>segonnum && caracter=='<')
	{
		for (int cont=primernum; cont>=segonnum; cont--)
		{
			printf("\n%d",cont);
		}
	}
	else if (primernum<segonnum && caracter=='>')
	{
		for (int cont=primernum; cont<=segonnum; cont++)
		{
			printf("\n%d",cont);
		}
	}
	else if (primernum<segonnum && caracter=='<')
	{
		for (int cont=segonnum; cont>=primernum; cont--)
		{
			printf("\n%d",cont);
		}
	}
	else
	{
		printf("\nEls dos numeros son iguals.");
	}

	acabament();
	return 0;
}
