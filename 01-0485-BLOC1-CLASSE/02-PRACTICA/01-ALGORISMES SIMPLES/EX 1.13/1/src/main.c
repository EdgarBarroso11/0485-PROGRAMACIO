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
	
	int resultat;

	for (int x = 1; x < 11; x++)
	{
		printf("TAULA %d",x);
		printf("\n");
		for (int i = 1; i < 11; i++)
		{
			resultat=x*i;
			printf("%2d X %2d = %2d\n",x,i,resultat);
		}
		getchar();
		printf("\n");
	}

	acabament();
	return 0;
}
