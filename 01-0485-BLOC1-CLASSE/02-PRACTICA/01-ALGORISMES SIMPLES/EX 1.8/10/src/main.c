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
	
	int variable;

	for ( variable = 0; variable<100  ; variable++)
	{
		if (variable%10==0)
		{
			printf("\n%2d, ",variable);
		}
		else
		{
			printf("%2d, ",variable);
		}
		
	}
	
	acabament();
	return 0;
}
