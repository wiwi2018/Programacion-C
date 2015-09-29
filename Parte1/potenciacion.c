/* Programa en c de Potenciacion
 */

#include<stdio.h>

float base(void); 
int exponente(void); 
float potencia(float b, int n); 

int main()
{
  float b;
  int n;
  b = base();
  n = exponente();
  printf("%f elevado a la %d es igual a %f\n",b,n,potencia(b,n));
  }
  
  
float base(void) 

{
  int ok = 0;
  float b; 
  printf("Ingrese la base de la operacion: ");
  scanf("%f",&b);
  return b;
}

int exponente(void) 
{
  int n; 
  printf("Ingrese el exponente de la operacion: ");
  scanf("%d",&n);
  return n;
}

float potencia(float b, int n)
{
  float retorno = 1;
  if ( n > 0 )
    retorno = b*potencia(b,n-1);
  if ( n < 0 )
    retorno = potencia(b,n+1)/b;
  return retorno;
}
 


