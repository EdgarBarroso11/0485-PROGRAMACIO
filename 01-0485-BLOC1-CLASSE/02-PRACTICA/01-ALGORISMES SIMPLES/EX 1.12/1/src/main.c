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
	char lletra1=' ',lletraAnterior=' ';
	int contadorParaules=0;

	do
	{
		lletraAnterior=lletra1;

		printf("Introdueix un caracter: ");
		scanf("%c",&lletra1);
		while(getchar()!='\n');

		if ((lletra1==' '||lletra1=='.') &&  lletraAnterior!=' ')
		{
			contadorParaules++;
		}
	
	} while (lletra1!='.');
	
	printf("Hi ha %d paraules",contadorParaules);

	acabament();
	return 0;
}
