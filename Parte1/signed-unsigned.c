/* Usando los modificadores signed y unsigned */

#include <stdio.h>

main()
{
  signed char  ch;
  int   x;
  unsigned int y;

  ch = 0xFF;
  x = 0xFFFF;
  y = 0xFFFFu;
  
  printf("El decimal del signed 0xFF es %d.\n", ch);
  printf("El decimal del signed 0xFFFF es %d.\n", x);
  printf("El decimal del  unsigned 0xFFFFu es %u.\n", y);
  printf("El hex del decimal 12345 es 0x%X.\n", 12345);
  printf("El hex de  decimal -12345 es 0x%X.\n", -12345);

  return 0;
}