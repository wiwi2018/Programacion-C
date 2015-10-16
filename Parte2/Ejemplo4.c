/* Comprobemos que dos variables son iguales usando
 * punteros
 */

#include<stdio.h>

main()
{
		int a;
		int *punt1, *punt2;

		a = 5;
		punt1 =&a; punt2 =&a;
		if(*punt1 == *punt2)
				printf("punt1 y punt2 apuntan al mismo sitio\n");
}
