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
	
	int any, duesxifres;
	
	printf("Introdueix un any: ");
	scanf("%d",&any);

	if(any%4!=0)
	{
		printf("No es any de traspas, no es divisible per 4.");
	}
	else if(any%100==0)
	{
		duesxifres=any/100;
		if (duesxifres%4==0)
		{
			printf("Es any de traspas, tot i ser final de segle.");
		}
		else
		{
			printf("No es any de traspas, tot i ser final de segle.");
		}
	}
	else 
	{
		printf("Es any de traspas perque es divisible per 4 i no es final de segle.");
	}
	acabament();
	return 0;
}
