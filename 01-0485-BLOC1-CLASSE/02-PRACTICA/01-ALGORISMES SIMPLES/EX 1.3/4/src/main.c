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
	
	int km;
	float consum, litres;

	printf("Kilometres recorreguts: ");
	scanf("%d", &km);
	while (getchar() != '\n');

	printf("litres consumits: ");
	scanf("%f", &litres);
	while (getchar() != '\n');

	consum=(litres/km);

	printf("el consum per kilometre es de %.3f", consum);

	acabament();
	return 0;
}
