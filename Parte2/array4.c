/*
 * Un programa en C, que ordena elementos numericos por insercion 
 * 
 */

#include<stdio.h>

int main() {
   int i, j, numero, temp, vector[20];

   printf("Ingresa la longitud del vector:\n ");
   scanf("%d", &numero);

   printf("Ingresa  %d elementos: \n", numero);
   for (i = 0; i < numero; i++) {
      scanf("%d", &vector[i]);
   }

   for (i = 1; i < numero; i++) {
      temp = vector[i];
      j = i - 1;
      while ((temp < vector[j]) && (j >= 0)) {
         vector[j + 1] = vector[j];
         j = j - 1;
      }
      vector[j + 1] = temp;
   }

   printf("Despues del ordenamiento:\n ");
   for (i = 0; i < numero; i++) {
      printf("%d \n", vector[i]);
   }

   return 0;
}
