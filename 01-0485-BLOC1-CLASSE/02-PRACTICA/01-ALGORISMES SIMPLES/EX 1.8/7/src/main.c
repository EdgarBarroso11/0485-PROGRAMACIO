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

	int min, seg;
	
	printf("Introdueix quants minuts: ");
	scanf("%d",&min);


	for (int x=0 ; x<=min; x++)
	{
		for ( seg = 0; seg <59; seg++)
		{
			cls();
			printf("%02d:%02d",x, seg);
			Sleep(500);
		}

		cls();
		printf("%02d:%02d",x, seg);
		Sleep(500);
	}


	acabament();
	return 0;
}
