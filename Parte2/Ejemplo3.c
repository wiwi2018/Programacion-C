/*Accediendo al contenido de esas posiciones de memoria
 * usando el operador indireccion *
 */

#include<stdio.h>

main()
{
		int numero;
		int *punt;

		numero = 24;
		punt =&numero;

		printf("Direccion de numero =%p, valor numero=%i\n", punt, *punt);
}


