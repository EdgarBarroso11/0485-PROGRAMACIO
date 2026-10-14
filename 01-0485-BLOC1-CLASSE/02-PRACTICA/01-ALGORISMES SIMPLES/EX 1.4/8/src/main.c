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
	
	int num, abs;

	printf("Introdueix un numero: ");
	scanf("%d", &num);
	while(getchar()!='\n');

	if(num<0)
	{
		abs=-num;
	}
	else
	{
		abs=num;
	}

	printf("\nEl valor absolut de %d es %d", num, abs);

	acabament();
	return 0;
}
