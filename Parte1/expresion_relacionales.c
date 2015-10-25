/* Usando operadores relacionales */

#include <stdio.h>
main()
{
  int x, y;
  double z;

  x = 3;
  y = 5;
  z = 4.96;
  printf("Dado x = %d, y = %d, y  z = %.2f,\n", x, y, z);
  printf("x >= y  resulta: %d\n", x >= y);
  printf("x == y  resulta: %d\n", x == y);
  printf("x < z   resulta: %d\n", x < z);
  printf("y > z   resulta: %d\n", y > z);
  printf("x != y - 18  resulta: %d\n", x != y - 18);
  printf("x + y != z   resulta: %d\n", x + y != z);
    return 0;
 }