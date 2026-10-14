#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

#define PI 3.14159265358979323846

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	
	float radi;
	float perimetre;

	printf("Introdueix el radi del cercle: ");
	scanf("%f", &radi);

	perimetre = 2*PI*radi;

	printf("El perimetre del cercle és: %.2f", perimetre);


	acabament();
	return 0;
}
