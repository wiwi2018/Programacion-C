/* Asignacion y aritmetica de operadores en c */

#include <stdio.h>

main()
{
  int x, y, z;
  x = 1;   /* inicializamos x */
  y = 3;   /* inicializamos y */
  z = 10;  /* inicializamos z */
  printf("Dado x = %d, y = %d y  z = %d,\n", x, y, z);

  x = x + y;
  printf("x = x + y  asigna %d a x;\n", x);

  x = 1;  /* reseteamos x */
  x += y;
  printf("x += y  asigna %d a x;\n", x);
  x = 1;  /* reseteamos x */
  z = z * x + y;
  printf("z = z * x + y  asigna %d a z;\n", z);

  z = 10;  /* reseteamos z */
  z = z * (x + y);
  printf("z = z * (x + y) asigna %d a z;\n", z);

  z = 10;  /* reseteamos z */
  z *= x + y;
  printf("z *= x + y asigna %d a z.\n", z);

  return 0; 
  
}