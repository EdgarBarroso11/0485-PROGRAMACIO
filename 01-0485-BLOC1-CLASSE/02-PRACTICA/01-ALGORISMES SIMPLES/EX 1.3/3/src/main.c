#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

#define PI 3.14159

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	
	float radi, area;

	printf("Introdueix el radi del cercle: ");
	scanf("%f", &radi);
	while (getchar() != '\n');

	area=PI*radi*radi;

	printf("La seva area es: %.3f", area);

	acabament();
	return 0;
}
