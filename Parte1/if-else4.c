/* Usando la declaracion if*/

#include <stdio.h>

main()
{
  int i;
  printf("Los enteros que pueden ser divididos por 2 y 3 \n");
  printf("(en el rango de  0 a 100) es:\n");
  for (i=0; i<=100; i++){
    if ((i%2 == 0) && (i%3 == 0))
      printf("   %d\n", i);
   }

  return 0;
}