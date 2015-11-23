/* Programa en C, que crea un array de punteros de tipo int
 * y luego asigna espacio para cada fila y apunta esos 
 * punteros en cada fila
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nfilas = 5;     /* Ambas nfilas y  ncols deben ser evaluadas o leidas */
    int ncols = 10;    /* en tiempo de ejecucion */
    int i;
    int **fila_ptr;
    fila_ptr = malloc(nfilas * sizeof(int *));
    if (fila_ptr == NULL)
    {
        puts("\nNo se asigna espacio para  punteros fila.\n");
        exit(0);
    }

    printf("\n\n\nIndice   Puntero(hex)   Puntero(dec)   Diff.(dec)");

    for (i = 0; i < nfilas; i++)
    {
        fila_ptr[i] = malloc(ncols * sizeof(int));
        if (fila_ptr[i] == NULL)
        {
            printf("\nNo se asigna espacio para i[%d]\n",i);
            exit(0);
        }
        printf("\n%d         %p         %p", i, fila_ptr[i], fila_ptr[i]);
        if (i > 0)
            printf("       %d",(int)(fila_ptr[i] - fila_ptr[i-1]));
    }

    return 0;
}
