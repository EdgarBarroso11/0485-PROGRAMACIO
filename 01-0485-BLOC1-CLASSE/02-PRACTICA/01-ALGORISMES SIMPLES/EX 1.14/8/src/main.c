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
	
	int y=1,x=1,x1=1,y1=1,color,color1,x2=1,y2=1;
		
		for (int i=1; i < 26; i++)
		{
			do
			{
				color=rand() % 16;
			} while (color==color1);
			
			color1=color;

			setColor(color1);
		
			for ( x; x <= x1; x++)
			{
				gotoxy(x,y);
				printf("█");
			}
			x=1;
			x1++;
			y++;

			for ( y2; y2<=y1; y2++)
			{
				gotoxy(x2,y2);
				printf("█");
			}

			y2=1;
			y1++;
			x2++;
			
		}
	acabament();
	return 0;
}
