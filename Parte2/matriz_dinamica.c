/* Asignacion de momoria dinamica a una matriz 
 * en un programa en C
 */


#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int** matriz_asig(int** matriz, int filas, int columnas);
void matriz_free(int** matriz, int filas);

void matriz_impr(int** matriz, int filas, int columnas)
{
    int i,j;
    for(i=0; i<filas;i++)
    {
        for(j=0; j<columnas; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        putchar('\n');
    }
}



int** matriz_asig(int** matriz, int filas, int columnas)
{
    int i;
    matriz=malloc(sizeof(int)*filas*columnas);
    if(matriz!=NULL)
    {
        /*Asignando espacio para cada fila */
        for(i=0; i<filas;i++)
        {
            matriz[i] = malloc(sizeof(int)*columnas);
            if(matriz[i]==NULL)
            {
                return NULL;
            }
        }
    }
    return matriz;
}


void matriz_free(int** matriz, int filas)
{
    int i;
    for(i = 0; i < filas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}




int main(void)
{
    int **matriz = NULL;
    int i, j;

    /*asignando la matriz*/
    matriz = matriz_asig(matriz, 3, 3);

    /*Asignando los valores a la matriz */
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = (i+j);
        }
    }

    /*Imprimiendo los resultados*/
    matriz_impr(matriz,3,3);

    /*Liberando memoria*/
    matriz_free(matriz,3);
    puts("Memoria liberada");

    return 0;
}