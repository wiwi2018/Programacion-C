/*Programa que muestra el uso de array de enteros
* en lugar de arrays de caracteres
*/

#include <stdio.h>
#define FILAS 5
#define COLS 10

int multi[FILAS][COLS];

int main(void)
{
    int fila, col;
    for (fila = 0; fila < FILAS; fila++)
    {
        for (col = 0; col < COLS; col++)
        {
            multi[fila][col] = fila*col;
        }
    }

    for (fila = 0; fila < FILAS; fila++)
    {
        for (col = 0; col < COLS; col++)
        {
            printf("\n%d  ",multi[fila][col]);
            printf("%d ",*(*(multi + fila) + col));
        }
    }

    return 0;
}