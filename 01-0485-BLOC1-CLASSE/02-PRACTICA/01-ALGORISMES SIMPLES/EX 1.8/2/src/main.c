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

	int taula, resultat;
	
	printf("Introdueix la taula: ");
	scanf("%d",&taula);

	for (int  x=0; x<=10; x++)
	{
		resultat=taula*x;
		printf("\n%d X %d = %d",taula, x, resultat);
	}
	


	acabament();
	return 0;
}
