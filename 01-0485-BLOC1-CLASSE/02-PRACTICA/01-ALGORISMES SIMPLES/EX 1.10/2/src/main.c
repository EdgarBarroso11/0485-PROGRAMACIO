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
	
	int comptador=0, color;
	char lletra1;

	printf("Lletra aleatoria\n");
	
	do
	{
		color=1+rand()%(15-1+1);
		setColor(color);
		lletra1=65+rand() % (90-65+1);

		printf("%c",lletra1);

		if (lletra1=='A'||lletra1=='E'||lletra1=='I'||lletra1=='O'||lletra1=='U')
		{
			comptador++;
		}
		else
		{
			comptador=0;
		}
		
	} while (comptador<2);
	
	setColor(WHITE);

	

	acabament();
	return 0;
}
