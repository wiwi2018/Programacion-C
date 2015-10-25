/*Usando la funcion putc() en caracteres */
#include <stdio.h>

main()

{
  int ch;
  ch = 65;   /*El valor numerico de  A */
  printf("El caracter que tiene el valor numerico de 65 es: \n");
  putc(ch, stdout);
  return 0;
  
  
}
