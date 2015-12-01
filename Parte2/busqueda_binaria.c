/*
 * Este es un programa en C  que acepta n numeroeros almacenados en  
 * orden ascendente  y busca un numeroero usando la bisqueda binaria.
 * Muestra un mensaje de exito o de fallo.
 */
#include <stdio.h>
 
void main()
{
    int vector[10];
    int i, j, numero, temp, keynumero;
    int menor, medio, mayor;
 
    printf("Ingresa la longitud del vector \n");
    scanf("%d", &numero);
    printf("Ingresa los elementos uno a uno  \n");
    for (i = 0; i < numero; i++)
    {
        scanf("%d", &vector[i]);
    }
    printf("Elementos del vector de entrada son \n");
    for (i = 0; i < numero; i++)
    {
        printf("%d\n", vector[i]);
    }
    /*  El ordenamiento de burbuja empieza */
    for (i = 0; i < numero; i++)
    {
        for (j = 0; j < (numero - i - 1); j++)
        {
            if (vector[j] > vector[j + 1])
            {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    printf("El vector ordenado es ...\n");
    for (i = 0; i < numero; i++)
    {
        printf("%d\n", vector[i]);
    }
    printf("Ingresa el elemento a ser buscado \n");
    scanf("%d", &keynumero);
    /*  La busqueda binaria empieza*/
    menor = 1;
    mayor = numero;
    do
    {
        medio = (menor + mayor) / 2;
        if (keynumero < vector[medio])
            mayor = medio - 1;
        else if (keynumero > vector[medio])
            menor = medio + 1;
    } while (keynumero != vector[medio] && menor <= mayor);
    if (keynumero == vector[medio])
    {
        printf("Busqueda exitosa \n");
    }
    else
    {
        printf("Ooops fallo la busqueda \n");
    }
}
