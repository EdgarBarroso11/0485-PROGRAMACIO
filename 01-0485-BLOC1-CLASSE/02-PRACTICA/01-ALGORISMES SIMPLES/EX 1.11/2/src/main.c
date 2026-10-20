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
	
	int a,e,i,o,u;
	char lletra;

	do
	{
		printf("Introdueix un caracter: ");
		scanf("%c",&lletra);
		while(getchar()!='\n');

		if (lletra=='a'||lletra=='A')
		{
			a=1;
		}
		else if (lletra=='e'||lletra=='E')
		{
			e=1;
		}
		else if (lletra=='i'||lletra=='I')
		{
			i=1;
		}
		else if (lletra=='o'||lletra=='O')
		{
			o=1;
		}
		else if (lletra=='u'||lletra=='U')
		{
			u=1;
		}	
	} while (lletra!='.'&&(a!=1 || e!=1 || i!=1 || o!=1 || u!=1));
	
	if (a==1 && e==1 && i==1 && o==1 && u==1)
	{
		printf("\nS'ha trobat les 5 vocals");
	}
	else
	{
		printf("\nNo s'han trobat");
	}
	acabament();
	return 0;
}
