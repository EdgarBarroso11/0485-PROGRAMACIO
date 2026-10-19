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
	char lletra;
	int contador=0;

	do
	{
		printf("\nIntrodueix un caracter: ");
		scanf("%c",&lletra);
		while(getchar()!='\n');

		if (lletra=='a'|| lletra=='A')
		{
			contador++;
		}
	} while (lletra!='Z' && lletra!='z');
	
	printf("s ha introduit %d caracters a", contador);

	acabament();
	return 0;
}
