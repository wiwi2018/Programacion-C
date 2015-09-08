/*
* Un programa en C, para calcular la suma de 1ˆ2 + 2ˆ2 + . + nˆ2.
* usando for-if
*/
#include <stdio.h>
int main()
{
  int numero, i;
  int suma = 0;
  printf("Ingreso el maximo valor para la suma: \n");
  scanf("%d", &numero);
  suma = (numero * (numero + 1) * (2 * numero + 1 )) / 6;
  printf("La suma de los elementos de arriba es :\n ");
  for (i = 1; i <= numero; i++)
    {
      if (i != numero)
	printf("%dˆ2 + ", i);
      else
	printf("%dˆ2 = %d \n", i, suma);
    }
	return 0;
}