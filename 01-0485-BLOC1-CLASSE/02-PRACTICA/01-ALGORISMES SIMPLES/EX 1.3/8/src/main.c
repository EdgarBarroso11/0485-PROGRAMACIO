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
	
	int num1, num2, resultat;

	printf("Introdueix dos numeros enters: ");
	scanf("%d %d", &num1, &num2);
	while(getchar() !='\n');
	
	resultat=num1 + num2;

	printf("%d + %d = %d",num1, num2, resultat);

	acabament();
	return 0;
}
