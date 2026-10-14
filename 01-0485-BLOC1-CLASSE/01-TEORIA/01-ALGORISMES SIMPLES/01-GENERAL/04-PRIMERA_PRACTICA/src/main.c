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
	
	int edad;
	float numero;
	char sexe;

	printf("Introdueix la teva edat: ");
	scanf("%d", &edad);
	printf("La teva edad és: %d anys.", edad);
	while (getchar() != '\n');

	printf("\nIntrodueix un número decimal: ");
	scanf("%f", &numero);
	printf("La teva edad és: %d i el teu número decimal és: %f ", edad, numero);
	while (getchar() != '\n');

	printf("\nIntrodueix el teu sexe (H/D): ");
	scanf(" %c", &sexe);
	printf("La teva edad és: %d, el teu número decimal és: %f i el teu sexe és: %c", edad, numero, sexe);
	while (getchar() != '\n');

	acabament();
	return 0;
}

