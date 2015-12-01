/* Un programa para  tabular valores de funciones trigonometricas*/

#include <math.h>
#include <stdio.h>

void tabular(double (*f)(double), double primero,
              double ultimo, double incr);

int main(void)
{
  double final, incremento, inicial;

  printf("Ingresar valor inicial: ");
  scanf("%lf", &inicial);

  printf("Ingresar valor final: ");
  scanf("%lf", &final);

  printf("Ingresar incremento: ");
  scanf("%lf", &incremento);

  printf("\n      x        cos(x)"
         "\n   -------    -------\n");
  tabular(cos, inicial, final, incremento);

  printf("\n      x        sin(x)"
         "\n   -------    -------\n");
  tabular(sin, inicial, final, incremento);

  printf("\n      x        tan(x)"
         "\n   -------    -------\n");
  tabular(tan, inicial, final, incremento);

  return 0;
}

void tabular(double (*f)(double), double primero,
              double ultimo, double incr)
{
  double x;
  int i, num_intervalo;

  num_intervalo = ceil((ultimo - primero) / incr);
  for (i = 0; i <= num_intervalo; i++) {
    x = primero + i * incr;
    printf("%10.5f %10.5f\n", x, (*f)(x));
  }
}
