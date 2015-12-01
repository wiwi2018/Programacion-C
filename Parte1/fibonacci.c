// La secuencia de Fibonaccio usando funciones y recursion

#include<stdio.h>

int ingresar(void); // Prototipo de la función ingresar
int fibo(int n); // Prototipo de la función fibo

void main()
{
	int n; 
	n = ingresar();
	printf(" F(%d) = %d.\n\n", n, fibo(n));
}

int ingresar(void) // cabecera de la definición de la funcion exponente
{
	int n; // variable donde almacenara lo que voy a retornar
	printf("\n Ingrese el  numero entero): "); 
	scanf("%d",&n);
	return n;
}
	
int fibo(int n) // cabecera de la definición de la función fibo
{ 
	if ( n <= 2 ) 
		return 1; // fibo(1) = fibo (2) = 1
	else
		return fibo(n-1) + fibo(n-2); // fibo(n) = fibo(n-1) + fibo(n-2)
}
