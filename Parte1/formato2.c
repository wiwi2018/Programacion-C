/* Programa sobre especificadores de precision  */

#include <stdio.h>

main()
{
  int int_num;
  double flt_num;
  
  int_num = 123;
  flt_num = 123.456789;
  
  printf("Formato por defecto de un entero:    %d\n", int_num);
  printf("Con precision especifica:  %2.8d\n", int_num);
  printf("Formato por defecto de un numero punto flotante:  %f\n", flt_num);
  printf("Con precision especifica:  %-10.2f\n", flt_num);
  
  return 0;
}