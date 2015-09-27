/* Funcion numerica en C
* Calculando las funciones hiperbolicas inversas inversa
*/

#include <stdio.h>
#include <math.h>



double inv_sinh(double z)
{
  return log(z+sqrt(z*z+1.0));
}


double inv_cosh(double z)
{
  double sign=1.0;

  if (z < 0.0) sign=-1.0;
  return sign*log(z+sqrt(z*z-1.0));
}

double inv_tanh(double z)
{
  return log((1.0+z)/(1.0-z))/2.0;
}


int main(void)
{
  double x,sinh1,cosh1,tanh1,sign;

  printf("Escribe un numero real: ");
  scanf("%lf",&x);
  sinh1=sinh(x);
  cosh1=cosh(x);
  tanh1=sinh1/cosh1;
  printf(" F.Hiperbolicas sin, cos, tan: %10.5lf %10.5lf %10.5lf\n",
	  sinh1,cosh1,tanh1);
  printf("F.Hiperbolicas Inv  sin, cos, tan: %10.5lf %10.5lf %10.5lf\n",
	  inv_sinh(sinh1),inv_cosh(cosh1),
	  inv_tanh(tanh1));

  return 0;
}