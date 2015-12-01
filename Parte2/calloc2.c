/*Programa para encontrar el mayor elemento via asignacion  dinamica
 */


#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    float *data;
    printf("Ingresa el numero total de elementos(1 to 100): ");
    scanf("%d",&n);
    data=(float*)calloc(n,sizeof(float));  /* Asigna la memoria para  'n' elementos */
    if(data==NULL)
    {
        printf("Error!!! memoria no asignada.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)  /* Almacena los  numeros ingresado por el usuario */
    {
       printf("Ingresa los numeros %d: ",i+1);
       scanf("%f",data+i);
    }
    for(i=1;i<n;++i)  /* Bucle para almacenar el mayor numero en data */
    {
       if(*data<*(data+i)) /* Cambio si tu quiere encontrar el menor elemento */
           *data=*(data+i);
    }
    printf("Mayor elemento = %.2f\n",*data);
    return 0;
}
