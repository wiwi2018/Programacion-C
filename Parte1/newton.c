/* Ley de Newton en c*/

#include <stdio.h>
#include <math.h>

/* Prototipo de las funciones */

void dar_k(double T1, double T2, double T3,
	   double *k, double *T_ambiente, double *T0);
double dar_t(double T0, double T_ambiente, double k, double t);

int main()
{
  char f1,ot1;
  double T0,T_ambiente,T1,T2,t1,t2,T3,t3,k,t;

  do {
    ot1='n';
    printf("[k]: Resolviendo para k, T inicial, y T_ambiente,\n");
    printf("    Dando  T en tres espacios de tiempo iguales.\n");
    printf("[t]: Resolviendo T en un tiempo especifico, T inicial,  T ambiente y  k.\n");
    fflush(stdin);
    scanf("%c",&f1);
    switch (f1) {
      case 't':
      case 'T':
	printf("Dando  T, T_ambiente, k, y el tiempo: ");
	fflush(stdin);
	scanf("%lf %lf %lf %lf",&T0,&T_ambiente,&k,&t);
	printf("T = %lf\n",dar_t(T0,T_ambiente,k,t));
	break;
      case 'k':
      case 'K':
	printf("Damos  T1, T2, T3: ");
	fflush(stdin);
	scanf("%lf %lf %lf",&T1,&T2,&T3);
	dar_k(T1,T2,T3,&k,&T_ambiente,&T0);
	printf("k = %lf, T_ambiente =  %lf, To = %lf\n",k,T_ambiente,T0);
	break;
      default:
	printf("Error de entrada. Pruebe otra vez ...\n");
    }
    printf(" Quiere probar otra vez (s o n)?\n");
    fflush(stdin);
    scanf("%c",&ot1);
  } while (ot1 == 'y');
  return 0;
}

double dar_t(double T0, double T_ambiente, double k, double t)
{
  return(T_ambiente+(T0-T_ambiente)*exp(-k*t));
}

void dar_k(double T1, double T2, double T3, double *k, double *Ta, double *T0)
{
  *k = -log((T2-T3)/(T1-T2));
  *Ta = (T3*T1-T2*T2)/(T1+T3-2.0*T2);
  *T0 = (T1+exp(-*k)**Ta-*Ta)/exp(-*k);
}