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
	
	float numero, descompte, preuFinal;

	printf("Introdueix un numero: ");
	scanf("%f", &numero);
	while(getchar() != '\n');
	
	descompte=numero*0.15;
	preuFinal=numero-descompte;

	printf("Descomptant el 15%% queda: %.2f€", preuFinal);

	acabament();
	return 0;
}
