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

	int num1, num2, suma, resta, multiplicacio, divisio, residu; 

	printf("Introdueix dos numeros enters: ");
	scanf("%d %d", &num1, &num2);
	while(getchar() !='\n');
	
	suma=num1 + num2;
	resta=num1 - num2;
	multiplicacio= num1*num2;
	divisio=num1/num2;
	residu=num1%num2;

	printf("%d + %d = %d",num1, num2, suma);
	printf("\n%d - %d = %d", num1, num2, resta);
	printf("\n%d * %d = %d", num1, num2, multiplicacio);
	printf("\n%d / %d = %d", num1, num2, divisio);
	printf("\n%d %% %d = %d", num1, num2, residu);

	acabament();
	return 0;
}
