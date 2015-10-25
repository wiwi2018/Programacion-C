/*  Usando el operador  ?:  */

#include <stdio.h>

main()
{
  
  int   x;
  x = sizeof(int);
  printf("%s\n",
	 (x == 2) ? "El tipo de dato int tiene 2 bytes." : "int no tiene 2 bytes.");
  printf(" El maximo valor de int es: %d\n",
	 (x != 2) ? ~(1 << x * 8 - 1) : ~(1 << 15) );
   return 0;
  
}