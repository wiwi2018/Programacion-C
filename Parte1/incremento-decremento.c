/* Operadores de pre- o post-incremento(decremento) */

#include <stdio.h>

main()
{
  int w, x, y, z, resultado;
  w = x = y = z = 1;   /* inicializamos x e y */
  printf("Dado un  w = %d, x = %d, y = %d, and z = %d,\n", w, x, y, z);

  resultado = ++w;
  printf("++w tiene el valor de : %d\n", resultado);
  
  resultado = x++;
  printf("x++ tiene el valor de : %d\n", resultado);
  
  resultado = --y;
  printf("--y tiene el valor de : %d\n", resultado);
  
  resultado = z--;
  printf("z-- tiene el valor de : %d\n", resultado);
    return 0;
}