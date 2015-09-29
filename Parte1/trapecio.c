/* Programa en C, sobre el metodo del trapecio
 * en intgracion numerica
 */


#include <stdio.h>
#include <math.h>

double pdf(double x);
double M_trapecio(double x1,double x2,double (*f)(double));
double t(double x1,double x2,double (*f)(double)) {
  int i,n=100;
  double sum=0.,dx;
  dx=(x1+x2)/n;
  for (i=1; i<=n; i++)
    sum+=f(x1+(i-1)*dx)+f(x1+i*dx);
  return sum*dx/2.;
}

int main(void)
{
  double z;

  printf("Dando valor a la variable, >0: ");
  scanf("%lf",&z);
  printf("%lf\n",M_trapecio(0.,z,pdf));
  printf("%lf\n",t(0.,z,pdf));
  return 0;
}

double pdf(double x) {
  return exp(-x*x/2.)/sqrt(8.*atan(1.));
}

double M_trapecio(double x1,double x2,double (*f)(double)) {
  int i,n=100;
  double sum=0.,dx;

  dx=(x2-x1)/n;
  for (i=1; i<n; i++)
    sum+=f(x1+i*dx);
  return (f(x1)+f(x2))*dx/2.+sum*dx;
}