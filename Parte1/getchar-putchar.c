/*
** Este programa copia la entrada estandar a la salida estandar y
* calcula un "suma" de caractere. La suma es mostrada despues de la entrada.
*/
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
  
int c;
char sum =-1;

// Lee los caracteres uno a uno y los agrega a sum.

while( (c = getchar()) != EOF ){
  putchar( c );
  sum += c;
    }
      printf( "%d\n", sum );
      return EXIT_SUCCESS;
}