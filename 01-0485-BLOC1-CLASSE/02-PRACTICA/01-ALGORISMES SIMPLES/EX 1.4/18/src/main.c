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
	
	int hores, preuhora, retencio;
	float preuhores, horesextra, salaribrut, preuhoresext, salarinet, impostos;
	
	printf("Introdueix quantes hores has treballat i el preu de l'hora: ");
	scanf("%d %d",&hores, &preuhora);

	if(hores<0 || preuhora<0)
	{
		printf("Dades incorrectes.");
	}
	else
	{
		if (hores<35)
		{
			salaribrut=hores*preuhora;
		}
		else
		{
			horesextra=hores-34;
			preuhores=34*preuhora;
			preuhoresext=horesextra*preuhora*1.5;
			salaribrut=preuhores+preuhoresext;
		}

		if (salaribrut>=1020)
		{
			retencio=3;
		}
		else if (salaribrut<=120)
		{
			retencio=0;
		}
		else
		{
			retencio=2;
		}

		switch (retencio)
		{
		case 0:
			salarinet=salaribrut;
			printf("Sou final: %.2f€",salarinet);
			break;
		case 3:
			impostos=salaribrut*0.3;
			salarinet=salaribrut-impostos;
			printf("Sou final: %.2f€",salarinet);
			break;
		default:
			impostos=salaribrut*0.2;
			salarinet=salaribrut-impostos;
			printf("Sou final: %.2f€",salarinet);	
			break;
		}
	}
	acabament();
	return 0;
}
