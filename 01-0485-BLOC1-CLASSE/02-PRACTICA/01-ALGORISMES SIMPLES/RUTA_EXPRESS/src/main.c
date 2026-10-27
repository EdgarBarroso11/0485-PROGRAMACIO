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

	int preuKmMoto = 5, CarregaMoto = 30,Llindar10Moto=20, preuKmFurgo = 8, CarregaFurgo = 500, llindar10Furgo=100,llindar10Camio=1000, preuKmCamio = 15, CarregaCamio = 3000;

	char vehicle, enviament,entregaPaquet;
	int pesPaquet, numPaquet = 1, CarregaRestant, CarregaMax, km, Recarrec=0,preukm, import=0, preuPaquet1=0,preuPaquet2=0,preuPaquet3=0,preuPaquet4=0,preuPaquet5=0,pesTotal=0,lliurats=0,pendents,recarrecs=0,kmTotal,importCobrat=0,importPendent,pesMax=0,numeroPaquetPesMax;
	float percentatgeCarrega, percentatgeCarrega2 = 0,percentatgeLliurats,importMitja;

	setColor(BLUE);
	printf("SELECCIO DEL VEHICLE\n\n");
	setColor(WHITE);
	do
	{
		printf("Tipus de vehicle: M(Moto), F(Furgoneta) o C(Camio):");
		scanf("%c", &vehicle);
		while (getchar() != '\n');

		if (!(vehicle == 'M' || vehicle == 'm' || vehicle == 'F' || vehicle == 'f' || vehicle == 'C' || vehicle == 'c'))
		{
			setColor(RED);
			printf("Error: vehicle no valid.\n");
			setColor(WHITE);
		}

	} while (!(vehicle == 'M' || vehicle == 'm' || vehicle == 'F' || vehicle == 'f' || vehicle == 'C' || vehicle == 'c'));

	setColor(GREEN);
	if (vehicle == 'M' || vehicle == 'm')
	{
		printf("--> Moto | %d EUR/km | Carrega maxima: %d kg", preuKmMoto, CarregaMoto);
	}
	else if (vehicle == 'F' || vehicle == 'f')
	{
		printf("-->Furgoneta | %d EUR/km | Carrega maxima: %d kg", preuKmFurgo, CarregaFurgo);
	}
	else
	{
		printf("-->Camio | %d EUR/km | Carrega maxima: %d kg", preuKmCamio, CarregaCamio);
	}
	setColor(WHITE);

	printf("\n\nPrem una tecla per continuar: ");
	getchar();

	setColor(BLUE);
	printf("\n\nCARREGA DELS PAQUETS\n");
	setColor(WHITE);

	if (vehicle == 'M' || vehicle == 'm')
	{
		CarregaRestant = CarregaMoto;
		CarregaMax = CarregaRestant;
	}
	else if (vehicle == 'F' || vehicle == 'f')
	{
		CarregaRestant = CarregaFurgo;
		CarregaMax = CarregaRestant;
	}
	else
	{
		CarregaRestant = CarregaCamio;
		CarregaMax = CarregaRestant;
	}

	do
	{
		do
		{
			do
			{
				printf("\nPaquet %d - Pes (Kg, 0 per acabar): ", numPaquet);
				scanf("%d", &pesPaquet);
				while(getchar()!='\n');
				if (pesPaquet < 0)
				{
					setColor(RED);
					printf("Error: el pes no pot ser negatiu");
					setColor(WHITE);
				}
			} while (pesPaquet < 0);

			CarregaRestant = CarregaRestant - pesPaquet;

			if (CarregaRestant>=0 &&pesPaquet!=0)
			{
				pesTotal=pesPaquet+pesTotal;
				percentatgeCarrega = (100 * (float)pesPaquet) / (float)CarregaMax;
				percentatgeCarrega2 = percentatgeCarrega + percentatgeCarrega2;

				if (pesPaquet>pesMax)
				{
					pesMax=pesPaquet;
					numeroPaquetPesMax=numPaquet;

				}
				
				if (percentatgeCarrega2 >= 90 && percentatgeCarrega2<100)
				{
					printf("Carrega: [#########-] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 80 && percentatgeCarrega2<100)
				{
					printf("Carrega: [########--] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 70 && percentatgeCarrega2<100)
				{
					printf("Carrega: [#######---] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 60 && percentatgeCarrega2<100)
				{
					printf("Carrega: [######----] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 50 && percentatgeCarrega2<100)
				{
					printf("Carrega: [#####-----] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 40 && percentatgeCarrega2<100)
				{
					printf("Carrega: [####------] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 30 && percentatgeCarrega2<100)
				{
					printf("Carrega: [###-------] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 20 && percentatgeCarrega2<100)
				{
					printf("Carrega: [##--------] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 >= 10 && percentatgeCarrega2<100)
				{
					printf("Carrega: [#---------] %.0f%%", percentatgeCarrega2);
				}
				else if (percentatgeCarrega2 > 0 && percentatgeCarrega2<100)
				{
					printf("Carrega: [----------] %.0f%%", percentatgeCarrega2);
				}
				else
				{
					printf("Carrega: [##########] %.0f%%", percentatgeCarrega2);
				}

				printf("\n");
				do
				{
					printf("Paquet %d - Distancia(Km): ",numPaquet);
					scanf("%d",&km);
					while(getchar()!='\n');

					if (km<1||km>1000)
					{
						setColor(RED);
						printf("ERROR: la distancia ha de ser entre 1 i 1000 km\n");
						setColor(WHITE);
					}
					
				} while (km<1||km>=1000);
				kmTotal=km+kmTotal;
				if (vehicle == 'M' || vehicle == 'm')
				{
					preukm=preuKmMoto;
					if(pesPaquet>Llindar10Moto)
					{
						Recarrec==1;
					}
					else
					{
						Recarrec==0;
					}
					
				}
				else if (vehicle == 'F' || vehicle == 'f')
				{
					preukm=preuKmFurgo;
					if(pesPaquet>llindar10Furgo)
					{
						Recarrec=1;
					}
					else
					{
						Recarrec=0;
					}
				}
				else if (vehicle == 'C' || vehicle == 'c')
				{
					preukm=preuKmCamio;
					if(pesPaquet>llindar10Camio)
					{
						Recarrec=1;
					}
					else
					{
						Recarrec=0;
					}
					
				}
				setColor(GREEN);
				if (Recarrec==1)
				{
					import=km*preukm*0.1;
					import=km*preukm+import;
					printf("Paquet %d | %d kg | %d km | Recarrec: SI | A cobrar %.2d EUR", numPaquet,pesPaquet,km,import);
					recarrecs++;
				}
				else if(Recarrec==0)
				{
					import=km*preukm;
					printf("Paquet %d | %d kg | %d km | Recarrec: NO | A cobrar %.2d EUR", numPaquet,pesPaquet,km,import);
				}
				setColor(WHITE);

				
				if (numPaquet==1)
				{
					preuPaquet1=import;
				}
				else if (numPaquet==2)
				{
					preuPaquet2=import;
				}
				else if (numPaquet==3)
				{
					preuPaquet3=import;
				}
				else if (numPaquet==4)
				{
					preuPaquet4=import;
				}
				else if(numPaquet==5)
				{
					preuPaquet5=import;
				}
				
				numPaquet++;
				
			}
			else if (pesPaquet!=0)
			{
				CarregaRestant = CarregaRestant + pesPaquet;

				setColor(RED);
				printf("Error: exces de pes. Capacitat lliure: %dkg", CarregaRestant);
				setColor(WHITE);
			}
		} while (!(pesPaquet == 0 || numPaquet == 6 || percentatgeCarrega2 == 100));

		setColor(GREEN);
		printf("\n");
		if (pesPaquet == 0 && numPaquet-1!=0)
		{
			printf("Fi de la carrega: %d paquets carregats", numPaquet - 1);
		}
		else if (numPaquet == 6)
		{
			printf("Vehicle complet: 5 paquets");
		}
		else if (percentatgeCarrega2 == 100)
		{
			printf("Vehicle ple: carrega maxima assolida");
		}
		else if(numPaquet-1==0)
		{
			printf("--> No s'ha carregat cap paquet");
			do
			{
				printf("\nHi ha un altre enviament? (S/N): ");
				scanf("%c", &enviament);
				while(getchar()!='\n');
				if (enviament!='N'&&enviament!='n'&&enviament!='s'&&enviament!='S')
				{
					printf("\nResposta incorrecte\n");
				}
			} while (enviament!='N'&&enviament!='n'&&enviament!='s'&&enviament!='S');
		}
		setColor(WHITE);
		
	} while (enviament=='S'||enviament=='s');

	setColor(BLUE);
	printf("\n\nLLIURAMENT DELS PAQUETS\n");
	setColor(WHITE);

	for (int i = 1; i < numPaquet; i++)
	{
		do
		{
			printf("\nPaquet %d - Resultat (L/N):",i);
			scanf("%c",&entregaPaquet);
			while(getchar()!='\n');
		} while (!(entregaPaquet=='L'||entregaPaquet=='l'||entregaPaquet=='N'||entregaPaquet=='n'));
		
		if (entregaPaquet=='L'||entregaPaquet=='l')
		{
			setColor(GREEN);
			if(i==1)
			{
				printf("-->Paquet 1: LLIURAT | Cobrat %.0d",preuPaquet1);
				lliurats=lliurats+1;
				importCobrat=importCobrat+preuPaquet1;
			}
			else if(i==2)
			{
				printf("-->Paquet 2: LLIURAT | Cobrat %.0d",preuPaquet2);
				lliurats=lliurats+1;
				importCobrat=importCobrat+preuPaquet2;
			}
			else if(i==3)
			{
				printf("-->Paquet 3: LLIURAT | Cobrat %.0d",preuPaquet3);
				lliurats=lliurats+1;
				importCobrat=importCobrat+preuPaquet3;
			}
			else if(i==4)
			{
				printf("-->Paquet 4: LLIURAT | Cobrat %.0d",preuPaquet4);
				lliurats=lliurats+1;
				importCobrat=importCobrat+preuPaquet4;
			}
			else 
			{
				printf("-->Paquet 5: LLIURAT | Cobrat %.0d",preuPaquet5);
				lliurats=lliurats+1;
				importCobrat=importCobrat+preuPaquet5;
			}
			setColor(WHITE);
		}
		else
		{
			setColor(YELLOW);
			if(i==1)
			{
				printf("-->Paquet 1: NO LLIURAT | Cobrat %.0d",preuPaquet1);
				importPendent=importPendent+preuPaquet1;
			}
			else if(i==2)
			{
				printf("-->Paquet 2: NO LLIURAT | Cobrat %.0d",preuPaquet2);
				importPendent=importPendent+preuPaquet2;
			}
			else if(i==3)
			{
				printf("-->Paquet 3: NO LLIURAT | Cobrat %.0d",preuPaquet3);
				importPendent=importPendent+preuPaquet3;
			}
			else if(i==4)
			{
				printf("-->Paquet 4: NO LLIURAT | Cobrat %.0d",preuPaquet4);
				importPendent=importPendent+preuPaquet4;
			}
			else 
			{
				printf("-->Paquet 5: NO LLIURAT | Cobrat %.0d",preuPaquet5);
				importPendent=importPendent+preuPaquet5;
			}
			setColor(WHITE);
		}
	}
		pendents=(numPaquet-1)-lliurats;
		percentatgeLliurats=(100*(float)lliurats)/((float)numPaquet-1);
		importMitja=((float)importCobrat/(float)lliurats);

		setColor(BLUE);
		printf("\n\nRESUM DE L'ENVIAMENT");
		setColor(WHITE);

		printf("\nPaquets carregats: %d | Pes total: %d %.2f%%\n",numPaquet-1,pesTotal,percentatgeCarrega2);
		printf("\nLliurats: %d | Pendents de lliurar: %d\n",lliurats,pendents);
		printf("\nPaquets amb recarrec: %d",recarrecs);
		printf("\nDistancia total: %d",kmTotal);
		setColor(GREEN);
		printf("\nIMPORT COBRAT: %d EUR",importCobrat);
		setColor(YELLOW);
		printf("\nIMPORT PENDENT: %d EUR",importPendent);

		setColor(BLUE);
		printf("\n\nESTADISTIQUES");
		setColor(WHITE);
		printf("\nPaquets lliurats: %.2f%%",percentatgeLliurats);
		printf("\nPaquet mes pesat: paquet %d (%d)",numeroPaquetPesMax, pesMax);
		printf("\nImport mitja per paquet lliurat: %.2f EUR",importMitja);
	

	acabament();
	return 0;
}
