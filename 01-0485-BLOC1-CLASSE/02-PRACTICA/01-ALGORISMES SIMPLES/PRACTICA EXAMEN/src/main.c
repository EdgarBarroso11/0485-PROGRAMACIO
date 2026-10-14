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
	
	int x;
	float y;
	char z;

	printf("");
	scanf("%d",&x);
	scanf("%f",&y);
	scanf("%c",&z);

	while(getchar()!='\n');

	printf("%d",x);
	printf("%f",y);
	printf("%c",z);

	if (x=y)
	{
		printf("%d",x);
	}
	else
	{

	}

	switch (x)
	{
	case 1:
		x;
		break;
	case 5:	
	default:
		break;
	}






	acabament();
	return 0;
}
