/*Usando los especificadores %hd, %ld y %lu  */

#include <stdio.h>

main()

{
  short int         x;
  unsigned int      y;
  long int          s;
  unsigned long int t;
  
  x = 0xFFFF;
  y = 0xFFFFU;
  s = 0xFFFFFFFFl;
  t = 0xFFFFFFFFL;

  printf("El short int de 0xFFFF es %hd.\n", x);
  printf("El unsigned int de 0xFFFF es %u.\n", y);
  printf("El long int de 0xFFFFFFFF es %ld.\n", s);
  printf("El unsigned long int de 0xFFFFFFFF es %lu.\n", t);
  
  return 0;

}