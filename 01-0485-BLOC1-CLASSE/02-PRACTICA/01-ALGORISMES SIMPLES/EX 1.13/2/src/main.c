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
	
	int x=1,y=1;
	for (int taula = 1; taula < 11; taula++)
	{
		for (int i = 1; i < 11; i++)
		{
			gotoxy(x,y);
			printf("%2d * %2d = %2d\n",taula,i,taula*i);
			Sleep(100);
			y++;
		}
		if (taula>=5)
		{
			y=13;
		}
		else
		{
			y=1;
		}
		x=x+15;
		if (taula==5)
		{
			x=1;
		}
		Sleep(1000);
	}
	acabament();
	return 0;
}
