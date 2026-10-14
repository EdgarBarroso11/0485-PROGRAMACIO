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
	
	int a, b;

	printf("Introdueix el resultat d'un partit (equip A-B): ");
	scanf("%d %d", &a, &b);
	while(getchar()!='\n');

	if(a>=0 && b>=0)
		{
			if (a>b)
			{
				printf("El Equip A ha guanyat.");
			}
			else if (b>a)
			{
				printf("El Equip B ha guanyat.");
			}
			else
			{
				printf("Han quedat empate.");
			}
		}
	else
	{
		printf("Dades inicials incorrectes.");
	}
	

	acabament();
	return 0;
}
