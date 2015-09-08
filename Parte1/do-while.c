/*
* Un programa para calcular el valor del coseno en terminos de series* dado un grado de precision
* y el uso del bucle do y while
* Para ver como es el desarrollo por series del coseno, ver:
* https://en.wikipedia.org/wiki/Trigonometric_functions
* No olvides de compilar gcc do-while.c -lm
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
  int n, x1;
  float presc, term, denominador, x, cosx, cosval;
  printf("Ingrese el valor de x (en grados) \n");
  scanf("%f", &x);
  x1 = x;
  
/* Convirtiendo grados a radianes */
  x = x * (3.142 / 180.0);
  cosval = cos(x);
  printf("Ingresar el grado de precision para la funcion \n");
  scanf("%f", &presc);
  term = 1;
  cosx = term;
  n = 1;
  do
    {
      denominador = 2 * n * (2 * n - 1);
      term = -term * x * x / denominador;
      cosx = cosx + term;
      n = n + 1;
  } while (presc <= fabs(cosval - cosx));
      printf("Suma de la serie coseno = %f\n", cosx);
      printf("Usando la libreria estandar cos(%d) = %f\n", x1, cos(x));
}