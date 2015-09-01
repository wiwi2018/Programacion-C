/* Programa que retorna el inverso de un lista de  numeros
 * Otra version del problema
 * No olvidar de compilar con gcc reverse-numero.c -lm
*/
#include <stdio.h>

#define N 10

int main (void)

{
     int a[N], *p;
     
    printf("Ingresa los %d numeros: ", N);
    for (p = a; p < a + N; p++)
     scanf("%d", p);
      printf("El numero en orden inverso:");

      for (p= a + N - 1; p>= a; p--)
      printf("%d ", *p);
      printf("\n");
      
      return 0;
}
