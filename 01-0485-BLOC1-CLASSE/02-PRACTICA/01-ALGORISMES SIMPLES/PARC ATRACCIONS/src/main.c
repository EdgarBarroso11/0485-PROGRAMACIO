#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));

	int edat, alcada, diasetmana,dia,edat2;
	float preu=0, preumenu, preutotal, pagament, canvi;
	char menu;
	bool aMontanyaRusa, atobogant;
	int apirata, acaiguda;  //1: peta tot  2: edat   3: alcada  4 =tot 
	bool continuar=true;

	printf("A. DADES VISITANTS");
	printf("\n-------------------------------");
	printf("\nIntrodueix l'edat: ");
	scanf("%d", &edat);
	while (getchar() != '\n');

	
	if (edat < 0 || edat>120)
	{
		setColor(RED);
		printf("L'edat a de ser entre (0/120).");
		setColor(WHITE);
	}
	else
	{
		printf("Introdueix l'alçada en cm: ");
		scanf("%d", &alcada);
		while (getchar() != '\n');

		if (alcada < 50 || alcada > 250)
		{
			setColor(RED);
			printf("L'alçada introduida es incorrecte.");
			setColor(WHITE);
		}
		else
		{
			
			printf("Introdueix un dia de la setmana (1/7): ");
			scanf("%d", &diasetmana);
			while (getchar() != '\n');

			if (diasetmana < 1 || diasetmana > 7)
			{
				setColor(RED);
				printf("El dia de la setmana introduit es incorrecte (1/7).");
				setColor(WHITE);
			}
			else
			{
				setColor(GREEN);
				switch (diasetmana)
				{
				case 1:
					printf("\nDilluns - dia laborable.");
					printf("Dades correctes, continuem.");
					dia=1;
					break;
				case 2:
					printf("\nDimarts - dia laborable. ");
					printf("Dades correctes, continuem.");
					dia=2;
					break;
				case 3:
					printf("\nDimecres - dia laborable. ");
					printf("Dades correctes, continuem.");
					dia=3;
					break;
				case 4:
					printf("\nDijous - dia laborable. ");
					printf("Dades correctes, continuem.");
					dia=4;
					break;
				case 5:
					printf("\nDivendres - dia laborable. ");
					printf("Dades correctes, continuem.");
					dia=5;
					break;
				case 6:
					printf("\nDissabte - dia festiu. ");
					printf("Dades correctes, continuem.");
					dia=6;
					break;
				case 7:
					printf("\nDiumenge - dia festiu. ");
					printf("Dades correctes, continuem.");
					dia=7;
					break;
				}
				setColor(WHITE);
				printf("\n\nB.PREU DE L'ENTRADA");
				printf("\n-------------------------------");
				setColor(GREEN);
				if (edat <= 3)
				{
					preu=0;
					edat2=1;
				}
				else if (edat <= 12)
				{
					preu = 8.5;
					edat2=2;
				}
				else if (edat <= 17)
				{
					preu = 12;
					edat2=3;
				}
				else if (edat <= 64)
				{
					preu = 18;
					edat2=4;
				}
				else
				{
					preu = 10;
					edat2=5;
				}
				
				switch (diasetmana)
				{
				case 3:
					preu = preu * 0.8;
					printf("\nEl preu de l'entrada es: %.2f", preu);
					break;
				case 6 ... 7:
					preu = preu + (preu * 0.25);
					printf("\nEl preu de l'entrada es: %.2f", preu);
				default:
					printf("\nEl preu de l'entrada es: %.2f", preu);
					break;
				}

				setColor(WHITE);
				printf("\n\nC. ATRACCIONS DISPONIBLES");
				printf("\n-------------------------------");

				
				if (alcada < 120)
				{
					setColor(RED);
					aMontanyaRusa=false;
					printf("\nLa Muntanya Russa: NO - alçada insuficient");
				}
				else
				{
					setColor(GREEN);
					aMontanyaRusa=true;
					printf("\nLa Muntanya Russa: POT");
				}
				if (alcada < 100)
				{
					setColor(RED);
					atobogant=false;
					printf("\nEl tobogant gegant: NO - alçada insuficient");
				}
				else
				{
					setColor(GREEN);
					atobogant=true;
					printf("\nEl tobogant gegant: POT");
				}
				if (alcada < 140 && edat < 7)
				{
					setColor(RED);
					apirata=1;
					printf("\nEl pirata: NO - alçada i edat insuficient");
				}
				else if (alcada < 140)
				{
					setColor(RED);
					apirata=2;
					printf("\nEl pirata: NO - alçada insuficient");
				}
				else if (edat < 7)
				{
					setColor(RED);
					apirata=3;
					printf("\nEl pirata: NO - edat insuficient");
				}
				else
				{
					setColor(GREEN);
					apirata=4;
					printf("\nEl pirata: POT");
				}

				if (alcada < 150 && edat < 14)
				{
					setColor(RED);
					acaiguda=1;
					printf("\nLa Caiguda Lliure: NO - alçada i edat insuficient");
				}
				else if (alcada < 140)
				{
					setColor(RED);
					acaiguda=2;
					printf("\nLa Caiguda Lliure: NO - alçada insuficient");
				}
				else if (edat < 7)
				{
					setColor(RED);
					acaiguda=3;
					printf("\nLa Caiguda Lliure: NO - edat insuficient");
				}
				else
				{
					setColor(GREEN);
					acaiguda=4;
					printf("\nLa Caiguda Lliure: POT");
				}

				setColor(WHITE);
				if (edat>3)
				{
					printf("\n\nD. MENJAR AL PARC");
					printf("\n-------------------------------");
					printf("\nC - Menú Clàssic\nI - Menú Infantil\nP - Menú Premium\nX - Sense menjar");
					printf("\n\nIntrodueix l'opcio de menu ('I','C','P','X'): ");
					scanf("%c", &menu);
					while (getchar() != '\n');

					setColor(GREEN);
					switch (menu)
					{
					case 'i':
					case 'I':
						preumenu = 6.5;
						printf("\nMenu Infantil: %.2f", preumenu);
						break;
					case 'c':
					case 'C':
						preumenu = 10;
						printf("\nMenu Classic: %.2f", preumenu);
						break;
					case 'p':
					case 'P':
						preumenu = 14;
						printf("\nMenu Premium: %.2f", preumenu);
						break;
					case 'x':
					case 'X':
						preumenu = 0;
						printf("\nSense Menjar: %.2f", preumenu);
						break;
					default:
						setColor(RED);
						continuar=false;
						printf("\nERROR");
						break;
					}


				}
				setColor(WHITE);
				if (continuar)
				{

					preutotal = preu + preumenu;

					printf("\n\nE. PREU TOTAL");
					printf("\n-------------------------------");
					printf("\nPreu entrada: %.2f",preu);
					printf("\nPreu menjar: %.2f",preumenu);
					printf("\nPreu total: %.2f",preutotal);

					printf("\nIntrodueix el preu pagat pel visitant: ");
					scanf("%f", &pagament);

					if (pagament > preutotal)
					{
						canvi = pagament - preutotal;
						printf("El canvi: %.2f", canvi);
					}
					else if (pagament == preutotal)
					{
					printf("Pagament exacte");
					}
					else
					{
					canvi = preutotal - pagament;
					canvi= canvi * -1;
					printf("Falten %.2fEUR",canvi);
					}
					printf("\n\n\n\n\n=====================================");
					printf("\nPARC D'ATRACCIONS MEGAFUN\n TIQUET DE VISITA");
					printf("\n=============================================");
					printf("\nDia: ");
					switch (dia)
					{
					case 1:
						printf("Dilluns (Laborable)");
						break;
					case 2:
						printf("Dimarts (Laborable)");
						break;
					case 3:
						printf("Dimecres (Laborable)");
						break;
					case 4:
						printf("Dijous (Laborable)");
						break;
					case 5:
						printf("Divendres (Laborable)");
						break;
					case 6:
						printf("Dissabte (Cap de setmana)");
						break;
					case 7:
						printf("Diumenge (Cap de setmana)");
						break;
					}

					printf("\nVisitant: ");
					switch (edat2)
					{
					case 1:
						printf("Bebe ");
						break;
					case 2:
						printf("Infantil ");
						break;
					case 3:
						printf("Jove ");
						break;
					case 4:
						printf("Adult ");
						break;
					case 5:
						printf("Senior ");
						break;
					}
					printf(" | Edat: %d | Alçada: %dcm",edat,alcada);
					printf("\n---------------------------------------------");
					printf("\nEntrada: ");
					switch (edat2)
					{
					case 1:
						printf("(Bebe, ");
						break;
					case 2:
						printf("(Infantil, ");
						break;
					case 3:
						printf("(Jove, ");
						break;
					case 4:
						printf("(Adult, ");
						break;
					case 5:
						printf("(Senior, ");
						break;
					}
					
					switch (diasetmana)
					{
					case 1:
						printf("Dilluns - sense descompte.):  %.2fEUR",edat2,preu);
						break;
					case 2:
						printf("Dimarts - sense descompte.):  %.2fEUR",preu);
						break;
					case 3:
						printf("Dimecres - -20%%.):  %.2fEUR",preu);
						break;
					case 4:
						printf("Dijous - sense descompte.):  %.2fEUR",preu);
						break;
					case 5:
						printf("Divendres - sense descompte.):  %.2fEUR",preu);
						break;
					case 6:
						printf("Dissabte - +25%%.):  %.2fEUR",preu);
						break;
					case 7:
						printf("Diumenge - +25%%.):  %.2fEUR",preu);
						break;
					}
					printf("\n---------------------------------------------");
					switch (menu)
					{
					case 'i':
					case 'I':
						printf("\nMenu Infantil:    %.2f", preumenu);
						break;
					case 'c':
					case 'C':
						printf("\nMenu Classic:     %.2f", preumenu);
						break;
					case 'p':
					case 'P':
						printf("\nMenu Premium:     %.2f", preumenu);
						break;
					case 'x':
					case 'X':
						printf("\nSense Menjar:     %.2f", preumenu);
						break;
					}
					printf("\n---------------------------------------------");
					printf("\nTOTAL:           %.2fEUR",preutotal);
					printf("\nImport pagat:    %.2fEUR",pagament);
					printf("\nCanvi:           %.2fEUR",canvi);
					printf("\n---------------------------------------------");
					printf("\n=============================================");
				
					printf("\nAtraccions disponibles:");
					switch (aMontanyaRusa)
					{
					case true:
						printf("\n[OK] La Muntanya Russa");
						break;
					case false:
						printf("\n[NO] La Muntanya Russa (alçada insuf.)");
						break;
					}
				
					switch (atobogant)
					{
					case false:
						printf("\n[NO] El tobogant gegant (alçada insuf.)");
						break;
					case true:
						printf("\n[OK] El tobogant gegant");
						break;
					}

					switch (apirata)
					{
					case 1:
						printf("\n[NO] El pirata (alçada i edat insuf.)");
						break;
					case 2:
						printf("\n[NO] El pirata (alçada insuf.)");
						break;
					case 3:
						printf("\n[NO] El pirata (edat insuf.)");
						break;
					case 4:
						printf("\n[OK] El pirata");
						break;
					}
					switch (acaiguda)
					{
					case 1:
						printf("\n[NO] La Caiguda Lliure: (alçada i edat insuf.)");
						break;
					case 2:
						printf("\n[NO] La Caiguda Lliure (alçada insuf.)");
						break;
					case 3:
						printf("\n[NO] La Caiguda Lliure (edat insuf.)");
						break;
					case 4:
						printf("\n[OK] La Caiguda Lliure");
						break;
					}
					printf("\n=============================================");
					printf("\n---------------------------------------------");
				}	
			}
		}
	}
	acabament();
	return 0;
}
