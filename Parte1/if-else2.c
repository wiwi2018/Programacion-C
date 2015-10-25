/* Usando la declaracion   if-else */

#include <stdio.h>
main()

{
  int i;
  printf("Numero Par   Numero Impar\n");
  for (i=0; i<10; i++)
    if (i%2 == 0)
      printf("%d", i);
    else
      printf("%14d\n", i);

  return 0;
}