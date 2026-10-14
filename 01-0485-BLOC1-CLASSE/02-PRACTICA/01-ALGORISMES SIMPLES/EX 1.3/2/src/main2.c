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

	int any,edad;

	printf("Introdueix l'any de neixement: ");
	scanf("%d", &any);
	while (getchar() != '\n');
	
	edad=2026-any;
	
	printf("Actualment tens %d anys", edad);
	



	acabament();
	return 0;
}
