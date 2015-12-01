/*
 * Un programa en C para encontrar el MCD de dos 
  numeros usando recursion
 */
#include <stdio.h>
 
int gcd(int, int);
 
int main()
{
    int a, b, resultado;
 
    printf(" Ingresa dos numeros para encontrar el MCD:");
    scanf("%d%d", &a, &b);
    resultado = mcd(a, b);
    printf("El MCD  DE  %d y  %d es %d.\n", a, b, resultado);
}
 
int mcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return mcd(a - b, b);
        }
        else
        {
            return mcd(a, b - a);
        }
    }
    return a;
}