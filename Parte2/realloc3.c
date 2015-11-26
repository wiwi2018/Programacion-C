/*La funcion realloc tiene la siguiente declaracion desde 'stdlib.h'

  void *realloc(void *punt, size_t tam);

  Si 'tam' es cero, entonces 'realloc' es equivalente a 'free(punt)'
  Y si 'punt' es NULL y tam no es cero entonces realloc es equivalente
  a 'malloc(tam)'

  */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{

        int *punt = (int*)malloc(10);
        // Llamamos realloc con tamaño tam = 0

        realloc(punt, 0);

        return 0;
}
