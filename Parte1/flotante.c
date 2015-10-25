/*Ejemplo de divisiones entre un entero y un numero punto flotante */

#include <stdio.h>

main()
{
  int int_num1, int_num2, int_num3;   /* Declaramos variables enteras */
  float flt_num1, flt_num2, flt_num3; /* Declaramos variables punto flotante */

  int_num1 = 32 / 10;    /* El divisor y el  dividendo son enteros */
  flt_num1 = 32 / 10;
  int_num2 = 32.0 / 10;  /* El divisor es un entero */
  flt_num2 = 32.0 / 10;
  int_num3 = 32 / 10.0;  /* El dividendo es un entero */
  flt_num3 = 32 / 10.0;
 
  printf("La division entera  de  32/10 es: %d\n", int_num1);
  printf("La division punto flotante de  32/10 es: %f\n", flt_num1);
  printf("La division entera  de  32.0/10 es: %d\n", int_num2);
  printf("La division punto flotante de  32.0/10 es: %f\n", flt_num2);
  printf("La division entera  de  32/10.0 es: %d\n", int_num3);
  printf("La division punto flotante de  32/10.0 es: %f\n", flt_num3);
   return 0;
}