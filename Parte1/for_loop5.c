/* Programa en C, que muestra el funcionamiento de los bucles anidados  */

#include <stdio.h>
main()
{
  int i, j;
  for (i=1; i<=3; i++) {   /* bucle externo */
    printf("Inicio  de iteracion %d del  bucle externo.\n", i);
    for (j=1; j<=4; j++)  /* bucle interno */
      printf("    Iteracion %d del bucle interno.\n", j);
        printf("El fin  de  la iteracion %d del bucle externo.\n", i);
  }
  return 0;
  
}
