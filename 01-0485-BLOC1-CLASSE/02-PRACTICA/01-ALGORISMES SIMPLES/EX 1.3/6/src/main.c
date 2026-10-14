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
	
	float primer, segon, tercer, mitjana;

	printf("Primer numero: ");
	scanf("%f", &primer);
	printf("Segon numero: ");
	scanf("%f", &segon);
	printf("Tercer numero: ");
	scanf("%f", &tercer);
	while(getchar() != '\n');

	mitjana=(primer+segon+tercer)/3;

	printf("El promig dels tres numeros es %.2f", mitjana);

	acabament();
	return 0;
}
