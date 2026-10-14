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
	
	float a, b, x;

	printf("Introdueix la variable a: ");
	scanf("%f", &a);
	while (getchar() != '\n');	
	printf("Introdueix la variable b: ");
	scanf("%f", &b);
	while (getchar() != '\n');	

	x = a;
	a = b;
	b = x;

	printf("La variable a ha passat a ser: %.2f \nLa variable b ha passat a ser: %.2f", a, b);
	

	acabament();
	return 0;
}
