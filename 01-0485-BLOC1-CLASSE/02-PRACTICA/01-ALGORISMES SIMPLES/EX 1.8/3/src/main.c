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
	
	int num;

	printf("Introduix un numero: ");
	scanf("%d",&num);

	while (num<0)
	{
		printf("Numero incorrecte, torna a introduir: ");
		scanf("%d",&num);
	} 
	
	for (int x = 0; x<=num; x=x+2)
	{
		printf("\n%d",x);
	}
		

	

	acabament();
	return 0;
}
