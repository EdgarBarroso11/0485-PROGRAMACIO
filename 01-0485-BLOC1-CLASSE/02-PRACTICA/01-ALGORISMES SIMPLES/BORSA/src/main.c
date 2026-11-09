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
	
	int cotitzacioMinima,cotitzacioMaxima,cotitzacioInicial,dia=1,cotitzacio2=cotitzacioMaxima,cotitzacio3=cotitzacioMaxima,operacio,contador=0,variableY=15,cotitzacioPrimera,cotitzacioMax=0,cotitzacioMin=40,diaMax=0,diaMin=40;
	float cotitzacioMitjana=0;
	printf("Benvingut al SISTEMA GESTOR DE COTITZACIONS DE BORSA\n\n");

	do
	{
		printf("Introdueix cotitzacio minima (0..10): ");
		scanf("%d",&cotitzacioMinima);
		while(getchar()!='\n');
	} while (cotitzacioMinima<0||cotitzacioMinima>10);
	
	do
	{
		printf("Introdueix cotitzacio maxima (30..40): ");
		scanf("%d",&cotitzacioMaxima);
		while(getchar()!='\n');
	} while (cotitzacioMaxima<30||cotitzacioMaxima>40);
	
	do
	{
		printf("Introdueix cotitzacio inicial (%d..%d): ",cotitzacioMinima,cotitzacioMaxima);
		scanf("%d",&cotitzacioPrimera);
		while(getchar()!='\n');
	} while (cotitzacioPrimera<cotitzacioMinima||cotitzacioPrimera>cotitzacioMaxima);

	cotitzacioInicial=cotitzacioPrimera;

	do
	{
		
		if (cotitzacioInicial<cotitzacioMinima)
		{
			setColor(RED);
		}
		else if (cotitzacioInicial>cotitzacioMaxima)
		{
			setColor(BLUE);
		}
		else
		{
			setColor(WHITE);
		}

		if (dia>=31)
		{
			if (dia==31)
			{
				variableY=15;
			}

			gotoxy(60,variableY);
			variableY++;
		}
		else
		{
			gotoxy(1,variableY);
			variableY++;
		}
		
		if (dia==1)
		{
			printf("dia %d:		%d",dia,cotitzacioInicial);
			cotitzacio2=cotitzacioInicial;
		}
		else if (dia==2)
		{		
			printf("dia %d:		%d		%d",dia,cotitzacioInicial,cotitzacio2);
			cotitzacio3=cotitzacio2;
			cotitzacio2=cotitzacioInicial;	
		}
		else 
		{
			printf("dia %d:		%d		%d		%d",dia,cotitzacioInicial,cotitzacio2,cotitzacio3);
			cotitzacio3=cotitzacio2;
			cotitzacio2=cotitzacioInicial;	
		}
		
		if (cotitzacioInicial<cotitzacioMinima)
		{
			contador++;
		}
		else
		{
			contador=0;
		}

		if (cotitzacioMin>cotitzacioInicial)
		{
			cotitzacioMin=cotitzacioInicial;
			diaMin=dia;
		}

		if (cotitzacioMax<cotitzacioInicial)
		{
			cotitzacioMax=cotitzacioInicial;
			diaMax=dia;
		}
		
		
		cotitzacioMitjana=cotitzacioMitjana+cotitzacioInicial;
		operacio=rand() % 5-2;
		cotitzacioInicial=cotitzacioInicial+(operacio);
		dia++;
	} while (contador!=3&&cotitzacio2>=0&&dia<61);
	
	if (contador==3)
	{
		printf("\nLa cotització ha baixat 3 cops seguits.");
	}
	else if (cotitzacio2<0)
	{
		printf("\nLa cotitzacio ha sigut negativa.");
	}
	
	
	cotitzacioMitjana=cotitzacioMitjana/(dia-1);
	setColor(WHITE);

	printf("\nDADES INICIALS");
	printf("\nCOTITZACIO MINIMA: %d",cotitzacioMinima);
	printf("\nCOTITZACIO MAXIMA: %d",cotitzacioMaxima);
	printf("\nCOTITZACIO INICIAL: %d",cotitzacioPrimera);

	printf("\nDades RESUM:");
	printf("\nEl valor promig: %.2f",cotitzacioMitjana);
	printf("\nMaxima cotitzacio:%d Dia: %d",cotitzacioMax,diaMax);
	printf("\nMinima cotitzacio:%d Dia: %d",cotitzacioMin,diaMin);

	acabament();
	return 0;
}
