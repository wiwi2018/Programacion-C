/* Operadores bitwise  en C */
#include <stdio.h>

main()
{
  int   x, y, z;
  
  x = 4321;
  y = 5678;
  
  printf("Dado un  x = %u, esto es, 0X%04X\n", x, x);
  printf("      y = %u, esto es, 0X%04X\n", y, y);

  z = x & y;
  printf("x & y  retorna: %6u, esto es, 0X%04X\n", z, z);

  z = x | y;
  printf("x | y  retorna: %6u, esto es, 0X%04X\n", z, z);

  z = x ^ y;
  printf("x ^ y  retorna: %6u, esto es, 0X%04X\n", z, z);
  printf("  ~x   retorna: %6u, esto es, 0X%04X\n", ~x, ~x);

  
  return 0;
  
}