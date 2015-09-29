/*Programa para calcular de forma aproximada
 * la funcion gamma
 */

#include <stdio.h>
#include <math.h>

double gamma_integrando(double x,double z);
double gamma(double z);

int main(void) {
  double g;

  g=gamma(0.5);
  printf("gamma(0.5) = %lf\n",g);
  g=gamma(1.5);
  printf("gamma(1.5) = %lf %lf %lf\n",g,g*2.,sqrt(4.*atan(1.)));
}
double gamma_integrando(double x,double z) {
  return exp(-x)*pow(x,z-1.);
}
double gamma(double z) {
  int n=20000,i;
  double dx,sum=0.,x_max=20.;

  dx=x_max/n;
  for (i=2; i<=(n-2); i+=2)
    sum+=2.*gamma_integrando(i*dx,z);
  for (i=1; i<=(n-1); i+=2)
    sum+=4.*gamma_integrando(i*dx,z);
  sum=(sum+gamma_integrando(x_max,z))*dx/3.;
  return sum;
}