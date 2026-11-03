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
	float cabalEmbassament, cabalRiu1,cabalRiu2,estat,percentatge,totalRius,estatAnterior;
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
		estatAnterior=estat;
		
		gotoxy(1,y);
		printf("%2d     %.2f      %.2f       %.2f    %.2f    %.2f      %d        %d",hora,estat,percentatge,cabalRiu1,cabalRiu2,totalRius,comporta1,comporta2);
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

		if (cabalRiu1==0)
		{
			cabalRiu1=rand()%3;
		}
		if (cabalRiu2==0)
		{
			cabalRiu2=rand()%3;
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

	// if (percentatge>=95&&percentatge<100)
	// {
	// 	("\n\n\nEVACUACIO");
	// }
	// else if(percentatge>100)
	// {

	// }

	
	setColor(WHITE);


	
	



	acabament();
	return 0;
}
