#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>
#include <string.h>
#include <stdbool.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

void acabament (void)
{
	printf("\nPrem una tecla per finalitzar");
	getch();
}

// retorna el tamany de la pantalla (amplada i alcada)
void tamanyPantalla(int *ancho, int *alto)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
 
 
    // Obtener información de la consola
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
    {
        *ancho = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        *alto = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }
}

//retorna (dia / mes / any)
void diaActual(int *dia,int *mes,int *any)
{
    time_t ara;
    struct tm *data_local;

    time(&ara);                    // obté el temps actual (segons des de l'època Unix)
    data_local = localtime(&ara);  // converteix a estructura de data/hora local

    *dia=data_local->tm_mday;
    *mes=data_local->tm_mon + 1;
    *any = data_local->tm_year + 1900;

}
// retorna la posicio del cursor (x-y)
void obtenirPosicioCursor(int *columna, int *fila) {
    CONSOLE_SCREEN_BUFFER_INFO info;
    HANDLE hConsola = GetStdHandle(STD_OUTPUT_HANDLE);
    
    GetConsoleScreenBufferInfo(hConsola, &info);
    
    *columna = info.dwCursorPosition.X;
    *fila = info.dwCursorPosition.Y;
}

//neteja la linia (fila i l'amplada de la linia)
void netejaLinia(int fila, int amplada)
{
    gotoxy(1,fila);
    for (int i=1;i<=amplada;i++)
    {
        printf(" ");
    }
    gotoxy(1,fila);
}