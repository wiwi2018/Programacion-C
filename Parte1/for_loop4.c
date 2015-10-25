/* Ejemplo del uso del iterador con caracteres */
  
#include <stdio.h>

main()
{
  int c;
  printf("Ingresa un caracter:\n(presiona x para salir)\n");
     for ( c=' '; c != 'x'; ) {
       c = getc(stdin);
       putchar(c);
    }
    printf("\nFuera del bucle for. Nos vemos!\n");
    return 0;
}