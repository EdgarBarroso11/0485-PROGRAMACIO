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
	
	int mes, dia;

	printf("Introduiex un dia i un mes: ");
	scanf("%d %d", &dia, &mes);

	if (dia<=0 || dia>31)
	{
		printf("Dia incorrecte");
	}
	else if(mes<1 || mes>12)
	{
		printf("Mes incorrecte");
	}
	else
	{
		if (mes==1)
		{
			printf("El dia %d de Gener es hivern.", dia);
		}
		else if(mes==2 && dia<29)
		{
			printf("El dia %d de Febrer es hivern.", dia);
		}
		else if (mes==3 && dia<21)
		{
			printf("El dia %d de Març es hivern.", dia);
		}
		else if (mes==3 && dia>20)
		{
			printf("El dia %d de Març es primavera.", dia);
		}
		else if (mes==4 && dia<31)
		{
			printf("El dia %d de Abril es primavera.", dia);
		}
		else if(mes==5)
		{
			printf("El dia %d de Maig es primavera.", dia);
		}
		else if(mes==6 && dia<21)
		{
			printf("El dia %d de Juny es primavera.", dia);
		}
		else if(mes==6 && dia>20 && dia<31)
		{
			printf("El dia %d de Juny es estiu.", dia);
		}
		else if(mes==7)
		{
			printf("El dia %d de Juliol es estiu.", dia);
		}
		else if(mes==8)
		{
			printf("El dia %d de Agost es estiu.", dia);
		}
		else if(mes==9 && dia<21)
		{
			printf("El dia %d de Septembre es estiu.", dia);
		}
		else if(mes==9 && dia>20 && dia<31)
		{
			printf("El dia %d de Septembre es tardor.", dia);
		}
		else if(mes==10)
		{
			printf("El dia %d de Octubre es tardor.", dia);
		}
		else if(mes==11 && dia<31)
		{
			printf("El dia %d de Novembre es tardor.",dia);
		}
		else if(mes==12 && dia<21)
		{
			printf("El dia %d de Decembre es tardor.",dia);
		}
		else if(mes==12 && dia>20)
		{
			printf("El dia %d de Decembre es hivern.",dia);
		}
		else
		{
			if(mes==2)
			{
				printf("Febrer només te 28 dies!");
			}
			else
			{
				printf("El mes %d només te 30 dies!", mes);
			}
		}
	}





	acabament();
	return 0;
}
