/* Uso de la funcion realloc: La funcion debe ser usada para
   asignacion de memoria dinamica. Si la memoria no es 
   asignada dinamicamente el comportamiento es indefinido
   */

#include<stdio.h>
#include<stdlib.h>

int main()
{
        int arreglo1[2], i;
        int *punt = arreglo1;
        int *punt1;

        arreglo1[0] = 15;
        arreglo1[1] = 20;

        punt1 = (int *)realloc(punt, sizeof(int)*3); // comportamiento indefinido
        *(punt1 +2) =35;

        for(i = 0;i < 3; i++)
                printf("%d", *(punt1 + i));

        getchar();
        return 0;
}
