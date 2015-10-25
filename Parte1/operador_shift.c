/*Operador shift en C  */
#include <stdio.h>

main()
{
  int   x, y, z;
  x = 255;
  y = 5;
  
  printf("Dado x = %4d, esto es, 0X%04X\n", x, x);
  printf("      y = %4d, esto es, 0X%04X\n", y, y);
  
  z = x >> y;
  printf("x >> y  retorna : %6d, esto es, 0X%04X\n", z, z);
  
  z = x << y;
  printf("x << y  retorna : %6d, esto es, 0X%04X\n", z, z);

  return 0;
}