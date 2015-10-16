/* Los punteros sirven para guardar 
 * direcciones de variables. En el ejemplo
 * utilizamos un puntero que almacene la direccion
 * de una variables int
 */

#include<stdio.h>

main()
{
		int numero;
		int *punt;

		numero = 34;
		punt = &numero;

		printf("Direccion de numero =%p, valor de numero=%i\n", punt, numero);
}
