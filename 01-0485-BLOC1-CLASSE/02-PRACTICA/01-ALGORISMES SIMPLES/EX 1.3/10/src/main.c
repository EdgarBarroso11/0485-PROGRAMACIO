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
	
float num1, num2, suma, resta, multiplicacio, divisio; 

	printf("Introdueix dos numeros enters: ");
	scanf("%f %f", &num1, &num2);
	while(getchar() !='\n');
	
	suma=num1 + num2;
	resta=num1 - num2;
	multiplicacio= num1*num2;
	divisio=num1/num2;

	printf("%.2f + %.2f = %.2f",num1, num2, suma);
	printf("\n%.2f - %.2f = %.2f", num1, num2, resta);
	printf("\n%.2f * %.2f = %.2f", num1, num2, multiplicacio);
	printf("\n%.2f / %.2f = %.2f", num1, num2, divisio);

	acabament();
	return 0;
}
