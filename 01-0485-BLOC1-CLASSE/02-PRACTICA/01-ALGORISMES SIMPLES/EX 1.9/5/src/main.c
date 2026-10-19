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
	
	int numero,resultat,contador=0;

	printf("Introdueix un numero");
	scanf("%d",&numero);

	do
	{
		numero=numero/10;
		contador++;
	} while (numero!=0);
	
	printf("El numero te: %d caracters",contador);

	acabament();
	return 0;
}
