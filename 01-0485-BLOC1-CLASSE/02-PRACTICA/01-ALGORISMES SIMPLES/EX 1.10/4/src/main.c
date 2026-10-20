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
	
	int f0=0,f1=1,num,color;
	
	printf("0: %d\n", f0);
	printf("1: %d\n", f1);

	for (int i = 2; i < 20; i++)
	{	

	setColor(i%15+1);

	num=f0+f1;
	printf("%d: %d\n",i,num);
	f0=f1;
	f1=num;
	}
	


	acabament();
	return 0;
}
