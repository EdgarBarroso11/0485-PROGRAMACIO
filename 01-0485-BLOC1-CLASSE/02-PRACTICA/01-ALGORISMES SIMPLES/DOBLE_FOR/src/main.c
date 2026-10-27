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
	
	int vegades, nums;
		printf("Quantes vegades vols veure els numeros?");
		scanf("%d",&vegades);

		printf("Quants nums vols veure?");
		scanf("%d",&nums);

	for (int x = 0; x < vegades; x++)
	{
		for (int i = 1; i < nums+1; i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	

	

	acabament();
	return 0;
}
