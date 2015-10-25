/* Usando el bucle while  */
#include <stdio.h>

main()
{
  int c;
  
  c = ' ';
  
  printf("Ingresa un caracter:\n(ingresa  x para salir)\n");
  while (c != 'x') {
    c = getc(stdin);
    putchar(c);
    
  }
  printf("\n Fuera del bucle  while . Nos vemos!\n");  
  return 0;
}