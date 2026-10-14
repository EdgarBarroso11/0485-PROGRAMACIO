#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

float main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));
	
	float temperatura, celsius;

	printf("Introdueix la temperatura en Fahrenheit: ");
	scanf("%f", &temperatura);
	while(getchar() != '\n');

	celsius=((5.0/9.0)*(temperatura-32));

	printf("La temperatura en Celsius es de %.3f", celsius);

	acabament();
	return 0;
}
