/*Conversion de entero a binario usando función recursiva*/

#include <stdio.h>

/*Prototipo de la función*/

void binario(int);

void main()
{
	int n;
	do
	{
	printf("Ingrese un número entero positivo :");
	scanf("%d", &n);
	if(n<0)printf("El número es invalido\n");
	}while(n<0);
	printf("Entero :%d\n",n);
	printf("Binario :");
	binario(n);
	printf("\n");
}

void binario(int n)
{
	if(n>1)binario(n/2);
	printf("%d",n%2);
}
