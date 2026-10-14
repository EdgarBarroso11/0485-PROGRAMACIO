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
	
	char caracter;
	int a=0, e=0, i=0, o=0, u=0;

	do
	{
		printf("Introdueix una vocal: ");
		scanf("%c",&caracter);
		while(getchar()!='\n');

		if (caracter=='a' || caracter=='A')
		{
			a=a+1;
		}
		else if (caracter=='e' || caracter=='E')
		{
			e=e+1;
		}
		else if (caracter=='i' || caracter=='I')
		{
			i=i+1;
		}
		else if (caracter=='o' || caracter=='O')
		{
			o=o+1;
		}
		else if (caracter=='u' || caracter=='U')
		{
			u=u+1;
		}

	} while (caracter!='.');
	
	printf("S'ha introduit: a=%d, e=%d, i=%d, o=%d, u=%d,", a,e,i,o,u);

	acabament();
	return 0;
}
