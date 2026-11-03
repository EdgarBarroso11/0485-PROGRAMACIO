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
	
	int hora=1,y=7,comporta1,comporta2,numAleatori,cabalMax=1500,color;
	float cabalEmbassament, cabalRiu1,cabalRiu2,estat,percentatge,totalRius,estatAnterior,percentatgeMitja=0,cabalMitja=0,cabalHoraMaxim=0,cabalHoraMinim=1500;
	printf("BENVINGUTS AL SISTEMA DE CONTROL DE L'EMBASSAMENT DE VALLFORNERS\nINDICA EL TEU NOM I COGNOM");
	do
	{
		printf("Introdueix el cabal inicial de l'embasament (0-1500):");
		scanf("%f",&cabalEmbassament);
	} while (cabalEmbassament<0||cabalEmbassament>cabalMax);
	
	do
	{
		printf("Introdueix la capacitat inicial del riu 1 (0-400):");
		scanf("%f",&cabalRiu1);
	} while (cabalRiu1<0||cabalRiu1>400);

	do
	{
		printf("Introdueix la capacitat inicial del riu 2 (0-400):");
		scanf("%f",&cabalRiu2);
	} while (cabalRiu2<0||cabalRiu2>400);

	printf("Hora    Estat     Percent    Riu1    Riu2    Total     Compt1    Compt2");

	estat=cabalEmbassament;

	do
	{
		totalRius=cabalRiu1+cabalRiu2;
		percentatge=(100*estat)/cabalMax;
		if (percentatge<15)
		{
			comporta1=0;
			comporta2=0;
		}
		else if (percentatge>=15&&percentatge<=80)
		{
			if (estatAnterior>=estat)
			{
				comporta1=0;
				comporta2=0;
			}
			else
			{
				comporta1=1;
				comporta2=0;
			}
		}
		else
		{
			comporta1=1;
			comporta2=1;
		}

		if (percentatge<=60)
		{
			color=2;
			setColor(color);
		}
		else if(percentatge>60&&percentatge<=90)
		{
			color=1;
			setColor(color);
		}
		else
		{
			color=4;
			setColor(color);
		}
		
		if (estat>cabalHoraMaxim)
		{
			cabalHoraMaxim=estat;
		}
		if (estat<cabalHoraMinim)
		{
			cabalHoraMinim=estat;
		}
		
		cabalMitja=estat+cabalMitja;
	
		estatAnterior=estat;
		
		percentatgeMitja=percentatge+percentatgeMitja;

		if (cabalRiu1==0)
		{
			cabalRiu1=rand()%3;
		}
		if (cabalRiu2==0)
		{
			cabalRiu2=rand()%3;
		}


		gotoxy(1,y);
		printf("%d     %.2f      %.2f       %.2f    %.2f    %.2f      %d        %d",hora,estat,percentatge,cabalRiu1,cabalRiu2,totalRius,comporta1,comporta2);
		numAleatori = rand() % 2;

		if (numAleatori==0)
		{
			cabalRiu1=cabalRiu1+rand()%11*cabalRiu1/100;
			cabalRiu2=cabalRiu2+rand()%11*cabalRiu2/100;
		}
		else if (numAleatori==1)
		{
			cabalRiu1=cabalRiu1-rand()%11*cabalRiu1/100;
			cabalRiu2=cabalRiu2-rand()%11*cabalRiu2/100;
		}

		estat=estat+totalRius;

		if (comporta1==1&&comporta2==0)
		{
			estat=estat*0.9;
		}
		else if(comporta1==1&&comporta2==1)
		{
			estat=estat*0.8;
		}
		y++;
		hora++;
	} while (hora<=23&&percentatge<=95);

	if (percentatge>=95&&percentatge<100)
	{
		printf("%c",7);
		("\n\n\nEVACUACIO");
	}
	else if(percentatge>100)
	{
		for (int i = 0; i < 4; i++)
		{
			Sleep(1000);
			printf("%c",7);
		}
		("\n\n\nEVACUACIO ZONA");
	}

	setColor(WHITE);

	cabalMitja=cabalMitja/hora-1;	
	percentatgeMitja=percentatgeMitja/hora-1;

	printf("\nRESUM");
	printf("\nEl cabal maxim de l'embassament ha sigut: %.2f",cabalHoraMaxim);
	printf("\nEl cabal minim de l'embassament ha sigut: %.2f",cabalHoraMinim);
	printf("\nEl cabal mitja ha sigut: %.2f",cabalMitja);
	printf("\nEl percentatge mitja ha sigut: %.2f%%",percentatgeMitja);

	acabament();
	return 0;
}
