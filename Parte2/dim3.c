/* En este programa asignamos un bloque de memoria para el array. 
 * Luego creamos un array de punteros apuntando a cada fila
 * Asi, incluso si el array de punteros se este utilizando, el 
 * array actual en memoria es contiguo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **f_punt;
    int *a_punt;
    int *p_punt;
    int k;
    int nfilas = 5;     /* Ambas  nfilas y ncols deben ser evaluados */
    int ncols = 8;     /* o leidos en tiempo de ejecucion  */
    int fila, col;

    /* Asignamos espacio de  memoria al array  */

    a_punt = malloc(nfilas * ncols * sizeof(int));
    if (a_punt == NULL)
    {
        puts("\nNo se asigna espacio al array");
        exit(0);
    }

    /*  asignamos espacio para los punteros de las filas*/

    f_punt = malloc(nfilas * sizeof(int *));
    if (f_punt == NULL)
    {
        puts("\nNo se asigna espacio para los punteros ");
        exit(0);
    }

    /* y ahora apuntamos los punteros   */

    for (k = 0; k < nfilas; k++)
    {
        f_punt[k] = a_punt + (k * ncols);
    }

    /* Ahora ilustramos como se incrementan los punteros fila */
    printf("\n\nMuestra como los punteros   fila  se incrementan");
    printf("\n\nIndice   Puntero (hex)  Diff.(dec)");

    for (fila = 0; fila < nfilas; fila++)
    {
        printf("\n%d         %p", fila, f_punt[fila]);
        if (fila > 0)
        printf("              %d",(f_punt[fila] - f_punt[fila-1]));
    }
    printf("\n\n Imprimimos nuestro array   \n");
    for (fila = 0; fila < nfilas; fila++)
    {
        for (col = 0; col < ncols; col++)
        {
            f_punt[fila][col] = fila + col;
            printf("%d ", f_punt[fila][col]);
        }
        putchar('\n');
    }

    puts("\n");

    /* Un array de dos dimensiones en un bloque contiguo de memoria */
    
    printf(" Mostramos que son contiguos en la memoria\n");

    p_punt = a_punt;
    for (fila = 0; fila < nfilas; fila++)
    {
        for (col = 0; col < ncols; col++)
        {
            printf("%d ", *(p_punt++));
        }
        putchar('\n');
    }

    return 0;
}

