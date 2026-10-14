#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"
#include <math.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(NULL));

	int x1, y1, x2, y2;
	float distancia;

	printf("Introdueix les coordenades del primer punt: ");
	scanf("%d %d", &x1, &y1);
	while (getchar() != '\n');
	printf("Introdueix les coordenades del segon punt: ");
	scanf("%d %d", &x2, &y2);
	while (getchar() != '\n');	
	
	distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

	printf("La distancia es %f", distancia);

	acabament();
	return 0;
}
