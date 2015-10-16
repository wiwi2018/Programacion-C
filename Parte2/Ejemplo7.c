/* Ejemplo del operador indireccion. Esto
 * significa "accede al contenido" al que 
 * apunta el puntero 
 */

#include <stdio.h>
int main(int argc, char** argv)
{
    int num1, num2;
	int *ptr1, *ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	num1 = 10;
	num2 = 15;

	*ptr1 = 30;
	*ptr2 = 50;

	*ptr2 = *ptr1;

	return 0;
}


