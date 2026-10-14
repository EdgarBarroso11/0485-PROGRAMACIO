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
	
	int numpersones, personesdeu, personesmenysdeu, diasetmana;
	float preumajors, preumenors, preutotal;

	printf("Quin dia de la setmana es avui (1/7): ");
	scanf("%d", &diasetmana);
	while(getchar()!='\n');

	if (diasetmana<1 || diasetmana>7)
	{
		printf("Dia de la setmana incorrecte.");
	}
	else
	{
		printf("Introdueix quantes persones sou: ");
		scanf("%d", &numpersones);
		while(getchar()!='\n');

		printf("I quants son menors de 10 anys?: ");
		scanf("%d", &personesmenysdeu);
		while(getchar()!='\n');

		if (personesmenysdeu>numpersones)
		{
			printf("\nNumero de persones menors de 10 incorrecte.");
		}
		else
		{
			personesdeu=numpersones-personesmenysdeu;

			preumajors=personesdeu*10.5;
			preumenors=personesmenysdeu*8.5;
			
			if (diasetmana==2)
			{
				printf("\nCom es dimarts, hi ha un 30%% de descompte.");
				preumajors=preumajors*0.7;
				preumenors=preumenors*0.7;
			}
			
			if (personesdeu>1 && personesmenysdeu>1)
			{
				printf("\nDescompte per familia numerosa.");
				preumajors=preumajors*0.8;
				preumenors=preumenors*0.8;
				preutotal=preumajors+preumenors;
				printf("\nEl preu dels majors de 10 anys es %.2f, el dels menors %.2f, i el total es: %.2f EUR",preumajors,preumenors,preutotal);
			}
			else
			{
				preutotal=preumajors+preumenors;
				printf("\nEl preu dels majors de 10 anys es %.2f, el dels menors %.2f, i el total es: %.2f EUR",preumajors,preumenors,preutotal);
			}
			
		}
	}






	acabament();
	return 0;
}
