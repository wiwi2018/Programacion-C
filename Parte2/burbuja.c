/*
 * Un programa para ordenar n numeros, usando el ordenamiento
 * burbuja. Imprimimos el vector inicial y luego ordenado.
 */

#include <stdio.h>
#define MAX 10
 
void main()
{
    int arreglo[MAX];
    int i, j, numero, temp;
 
    printf("Ingresamos la longitud del vector \n");
    scanf("%d", &numero);
    printf("Ingresamos los elementos uno a uno \n");
    for (i = 0; i < numero; i++)
    {
        scanf("%d", &arreglo[i]);
    }
    printf("El vector de entrada es   \n");
    for (i = 0; i < numero; i++)
    {
        printf("%d\n", arreglo[i]);
    }
    /*   Empezamo el ordenamiento burbuja */
    for (i = 0; i < numero; i++)
    {
        for (j = 0; j < (numero - i - 1); j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    printf("El vector ordenado es...\n");
    for (i = 0; i < numero; i++)
    {
        printf("%d\n", arreglo[i]);
    }
}
