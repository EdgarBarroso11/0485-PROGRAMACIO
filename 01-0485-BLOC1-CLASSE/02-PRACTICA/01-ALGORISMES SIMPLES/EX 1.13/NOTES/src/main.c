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
	
	float nota, nota1=0, nota2=0;
	int aprobat=0;
	for (int x = 1; x < 6; x++)
	{
		printf("Alumne %d\n",x);		
		for (int i = 0; i < 3; i++)
		{
			do
			{
				if (i==0)
				{
					printf("Introdueix la nota de Base de Dades:",i);
					scanf("%f",&nota);
				}
				else if (i==1)
				{
					printf("Introdueix la nota de Programacio:",i);
					scanf("%f",&nota);	
				}
				else
				{
					printf("Introdueix la nota de Web:",i);
					scanf("%f",&nota);
				}
				
			} while (nota<0||nota>10);
			nota1=nota1+nota;
		}
		printf("NOTA MITJANA:");
		nota1=nota1/3;
		printf("%.2f\n\n",nota1);

		if (nota1>=5)
		{
			aprobat++;
		}

		nota2=nota1+nota2;
		nota1=0;	
	}
	nota2=nota2/5;
	printf("\n\nLa nota mitjana es: %.2f",nota2);
	printf("\nEl numero d'aprobats son: %d",aprobat);
	printf("\nEl numero de suspesos son: %d",5-aprobat);
	acabament();
	return 0;
}
