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
	
	int hora, dia;

	printf("Introdueix una hora i un dia: ");
	scanf("%d %d", &hora, &dia);

	if (dia>0 && dia<8 && hora>=0 && hora<24)
	{
		if (dia==6 || dia==7)
		{
			printf("Es cap de setmana, la tarifa es 'Valle'");
		}
		else 
			{
				if(dia==1)
			{
				printf("Es dilluns a les %d ", hora);
			}
			else if (dia==2)
			{
				printf("Es dimarts a les %d ", hora);
			}
			else if (dia==3)
			{
				printf("Es dimecres a les %d ", hora);
			}
			else if (dia==4)
			{
				printf("Es dijous a les %d ", hora);
			}
			else if(dia==5)
			{
				printf("Es divendres a les %d ", hora);
			}

			if(hora>=0 && hora<8)
			{
				printf("es hora Valle");
			}
			else if((hora>9 && hora<15) || (hora>17 && hora<23))
			{
				printf("es hora Punta");
			}
			else
			{
				printf("es hora Llana");
			}
		}
	}
	else
	{
		printf("Les dades introduides son incorrectes.");
	}

	acabament();
	return 0;
}
