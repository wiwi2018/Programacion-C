/* Ejemplo de comparacion de dos variables  usando punteros */

#include<stdio.h>

main()
{
		int a, b;
		int *punt1, *punt2;
		a =5; b=5;
		punt1 =&a; punt2 =&b;

		if( *punt1 == *punt2)
				printf("Son iguales\n");

}
