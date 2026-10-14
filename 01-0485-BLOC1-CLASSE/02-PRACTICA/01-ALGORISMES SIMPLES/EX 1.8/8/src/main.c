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

	int min, seg, variableseg, variablemin;
	do
	{
		printf("Introdueix quans minuts vols que duri el contador: ");
		scanf("%d",&min);
	} while (min>3 || min<0);
	
	do
	{
		printf("Ara introdueix els segons: ");
		scanf("%d",&seg);
	} while( seg>59 || seg<0);

	variableseg = seg;

	for ( variablemin = min; variablemin >= 0; variablemin--)
	{
		for ( variableseg; variableseg > 0; variableseg--)
		{
			cls();
			printf("\nQueden %d mins i %d segons.",variablemin, variableseg);
			Sleep(1000);
		}

		cls();
		printf("\nQueden %d mins i %d segons.",variablemin, variableseg);
		Sleep(1000);
		variableseg=59;
	}
	
	printf("\nFI DEL CONTADOR");
	acabament();
	return 0;
}
