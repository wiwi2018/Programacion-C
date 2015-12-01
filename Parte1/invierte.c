/*Invertir un número apartir de 2 cifras usando función recursiva */

#include <stdio.h>

void invierte(int);

void main()
{
	int n;
	do
	{
		printf("Ingrese un número entero positivo :");
		scanf("%d",&n);
		if(n<0)printf("Numero invalido\n");
	}while(n<0);
	printf("Numero entero :%d\n",n);
	printf("Numero invertido :");
	invierte(n);
	printf("\n");
}

void invierte(int n)
{
	if(n>10)
	{
	printf("%d",n%10);
	invierte(n/10);
	}
	else
	printf("%d",n);
}

