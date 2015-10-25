/*Usando la declaracion  continue  en C */

#include <stdio.h>
main()
{
  
  int i, sum;
  sum = 0;
  for (i=1; i<8; i++){
    if ((i==3) || (i==5))
      continue;
      sum += i;
   }
  printf("La suma de 1, 2, 4, 6 y  7 es: %d\n", sum);
  return 0;
}