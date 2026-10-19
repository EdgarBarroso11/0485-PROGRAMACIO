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
	int edat, pes, minutsEscalfament, minutsTotal,serie=0,numRepeticions, repeticionsTotals=0, repeticionsMinim=50, repeticionsMaxim=0, contadorErrors=0, seriesValides;
	float factorNivell, ppm;
	char nivell;

	// CONFIGURACIO EDAT PES NIVELL ENTRENAMENT

	setColor(BLUE);
	printf("CONFIGURACIO EDAT - PES - NIVELL ENTRENAMENT");
	setColor(WHITE);

	do
	{
		printf("\n\nIntrodueix la teva edat (16..80): ");
		scanf("%d",&edat);
		while(getchar()!='\n');
	} while (edat<16||edat>80);
	setColor(GREEN);
	printf("--> Edat acceptada");
	setColor(WHITE);

	do
	{
		printf("\n\nIntrodueix el teu pes (30..200): ");
		scanf("%d",&pes);
		while(getchar()!='\n');
	} while (pes<30||pes>200);
	setColor(GREEN);
	printf("--> Pes acceptat");
	setColor(WHITE);

	do
	{
		printf("\n\nIntrodueix el nivell d'entrenament ('B'-Basic, 'M'-Mitja o 'A'-Avançat): ");
		scanf("%c",&nivell);
		while(getchar()!='\n');
	} while (nivell!='A'&&nivell!='a'&&nivell!='M'&&nivell!='m'&&nivell!='B'&&nivell!='b');
	setColor(GREEN);
	printf("--> Nivell acceptat");
	setColor(WHITE);

	Sleep(1000);
	printf("\n\nPrem una tecla per continuar");
	getchar();


	// PROCES ESCALFAMENT

	setColor(BLUE);
	printf("\n\nPROCES D'ESCALFAMENT:");
	setColor(WHITE);

	if (nivell=='B'||nivell=='b')
	{
		minutsEscalfament=5;
	}
	else if (nivell=='M'||nivell=='m')
	{
		minutsEscalfament=8;
	}
	else
	{
		minutsEscalfament=12;
	}
	
	minutsTotal=minutsEscalfament;

	printf("\n\n");
	for (minutsEscalfament; minutsEscalfament > 1; minutsEscalfament--)
	{
		printf("%d - ",minutsEscalfament);
		Sleep(1000);
	}
	printf("%d",minutsEscalfament);

	setColor(GREEN);
	printf("\n-->Escalfament completat");
	setColor(WHITE);

	printf("\n\nPrem una tecla per continuar");
	getchar();


	//PULSACIONS PER A CADA MINUT

	setColor(BLUE);
	printf("\n\nPULSACIONS PER MINUT");
	printf("\n");
	setColor(WHITE);
	
	if (minutsTotal==5)
	{
		factorNivell=0.6;
	}
	else if(minutsTotal==8)
	{
		factorNivell=0.75;
	}
	else
	{
		factorNivell=0.9;
	}
		
	for (int mins = 1; mins <= minutsTotal; mins++)
	{
		ppm=(220-edat)*factorNivell/(minutsTotal-mins+1);
		printf("\nMinut %02d: pulsacions max = (220-%d)*%.2f/(%d-%d+1) = %.2f ppm",mins,edat,factorNivell,minutsTotal,mins,ppm);
		Sleep(1000);
	}

	printf("\n\nPrem una tecla per continuar");
	getchar();
	

	//REGISTRE DE SERIES DE REPETICIONS

	setColor(BLUE);
	printf("\nSERIES D'ENTRENAMENT:\n");
	setColor(WHITE);
	
	
	printf("\nSeries d'entrenament (0 per acabar):");


	do
	{
		serie=serie+1;
		printf("\nRepeticions serie %d: ",serie);
		scanf("%d",&numRepeticions);
		while(getchar()!='\n');

		if (numRepeticions>0 && numRepeticions<=50)
		{
			if (contadorErrors==0)
			{
				setColor(GREEN);
				printf("=> Serie valida");
				setColor(WHITE);
			}
			else
			{
				setColor(GREEN);
				printf("=> Serie valida. Reset comptador invalidades");
				setColor(WHITE);
				contadorErrors=0;
			}

			repeticionsTotals= numRepeticions+repeticionsTotals;

			if (numRepeticions<repeticionsMinim)
			{
				repeticionsMinim=numRepeticions;
			}
			if (numRepeticions>repeticionsMaxim)
			{
				repeticionsMaxim=numRepeticions;
			}	
		}
		else if (numRepeticions>50)
		{
			contadorErrors++;
			setColor(YELLOW);
			printf("Error: Maxim. No comptada (%d, invalida consec.)",contadorErrors);
			setColor(WHITE);
		}
		else if (numRepeticions<0)
		{
			contadorErrors++;
			setColor(YELLOW);
			printf("Error: valor no valid. No comptada. (%d, invalida consec.)",contadorErrors);
			setColor(WHITE);
		}

		if (contadorErrors==3)
		{
			setColor(RED);
			printf("\n\nMassa errors consecutius. Fi del registe");
			setColor(WHITE);
		}

		if (numRepeticions==0)
		{
			printf("\n\n--> Fi del registre");
		}
		

	} while (numRepeticions!=0 && contadorErrors!=3);
	
	printf("\n\nPrem una tecla per continuar");
	getchar();

	//RESUM ENTRENAMENT

	setColor(BLUE);
	printf("\n\nRESUM ENTRENAMENT:");
	setColor(WHITE);





	acabament();
	return 0;
}
