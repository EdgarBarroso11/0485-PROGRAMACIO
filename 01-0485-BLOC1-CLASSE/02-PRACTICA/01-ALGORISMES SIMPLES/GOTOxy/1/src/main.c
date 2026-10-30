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
	int num;
	char lletraabecedari='A';

	do
	{
		printf("Introdueix un num (1/20): ");
		scanf("%d",&num);
	} while (num<1||num>20);
	cls();

	for (int lletra = 1; lletra < 21; lletra++)
	{
		if (lletra%2!=0)
		{
			for ( int a = num; a < 21; a++)
			{
				gotoxy(a,lletra);
				printf("%c",lletraabecedari);
				Sleep(100);
			}
		}
		else
		{
			for ( int b = 20; b >= num; b--)
			{
				gotoxy(b,lletra);
				printf("%c",lletraabecedari);
				Sleep(100);
			}
		}
		lletraabecedari++;
	}
	acabament();
	return 0;
}
