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

	float amplada, llargaria;
	float perimetre, area;

	printf("Introdueix l'amplada: ");
	scanf("%f", &amplada);
	while (getchar() != '\n');	
	printf("Introdueix la llargaria: ");
	scanf("%f", &llargaria);
	while (getchar() != '\n');

	perimetre = amplada*2 + llargaria*2;
	area = amplada*llargaria;

	printf("El seu perimetre és: %.2f", perimetre);
	printf("\nLa seva àrea és: %.2f", area);

	acabament();
	return 0;
}
