/*Programa para calcular el numero de combinaciones
* de k elementos en n dados
*/


#include<stdio.h>
int inicio(void); 
int muestra(int n); 
// Prototipo de la funcion combinatoria
int combinatoria(int n, int k);

int main()
{
  int n,k;
  n = inicio();
  k = muestra(n);
  printf("El numero de combinaciones de %d elementos de %d elementos  dados es %d\n",k,n,combinatoria(n,k));
}

int inicio(void) 
{
  int ok = 0;
  int m; 
  printf("Ingrese un entero positivo: ");
  scanf("%d",&m);
  return m;
}
int muestra(int n) 
{
  int ok = 0;
  int k; 
  printf("Ingrese un entero positivo menor o igual a %d: ",n);
  scanf("%d",&k);
  return k;
}

int combinatoria(int n, int k) 
{
  if (k == 1)
  return n;
  else
  if (n == k)
    return 1;
  else
    return combinatoria(n-1,k-1) + combinatoria(n-1,k);
}