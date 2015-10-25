/* El operador logico AND  */
#include <stdio.h>

main()
{
  int   num;
  num = 0;
  printf("El operador AND retorna : %d\n", (num%2 == 0) && (num%3 == 0));

  num = 2;
  printf("El operador AND retorna : %d\n", (num%2 == 0) && (num%3 == 0));
  
  num = 3;
  printf("El operador AND retorna : %d\n", (num%2 == 0) && (num%3 == 0));
 
  num = 6;
  printf("El operador AND retorna : %d\n", (num%2 == 0) && (num%3 == 0));

 return 0;

}