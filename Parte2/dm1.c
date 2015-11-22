/* Usando la palabra typedef en la asignacion
 * dinamica de arrays multidimensionales (2) 
 * para enteros. 
 */


#include <stdio.h>
#include <stdlib.h>

#define COLS 5

typedef int filaArray[COLS];
filaArray *rptr;

int main(void)
{
    int nfilas = 10;
    int fila, col;
    rptr = malloc(nfilas * COLS * sizeof(int)); // puntero a un tipo 'array de enteros'
    for (fila = 0; fila < nfilas; fila++)
    {
        for (col = 0; col < COLS; col++)
        {
            rptr[fila][col] = 17;
        }
    }

    return 0;
}