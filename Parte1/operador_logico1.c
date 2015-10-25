/* El operador logico OR*/

#include <stdio.h>

main()
{
  int   num;
  printf("Ingresa un unico digito que pueda ser dividido \n por 2 y 3:\n");
  for (num = 1; (num%2 != 0) || (num%3 != 0); )
    num = getchar() - 48;
  printf("El numero que cumple la condicion es: %d\n", num);
  return 0;
}