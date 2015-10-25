/* Operador logico de negacion  */

#include <stdio.h>

main()
{
  int   num;
  num = 7;
  
  printf("Dado num = 7\n");
  printf("!(num < 7)  retorna : %d\n", !(num < 7));
  printf("!(num > 7)  retorna : %d\n", !(num > 7));
  printf("!(num == 7) retorna : %d\n", !(num == 7));
   return 0;
 }