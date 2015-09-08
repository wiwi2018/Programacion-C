/* Programa acerca de los valores de char e int
 * limits.c:Muestra el rango de valores de char y int.
*
*/
#include <stdio.h>
#include <limits.h> // Contiene  los macros CHAR_MIN, INT_MIN, etc.
int main( )
{
  printf("Almacena el tamano y rango de  valores de los tipos char y int\n\n");
  printf("El tipo char es %s.\n\n", CHAR_MIN < 0 ? "signed" :"unsigned");
  printf(" Tipo tamano (en bytes) Minimo    Maximo \n"
	  "---------------------------------------------------\n");
  printf(" char %8d %20d %15d\n", sizeof(char), CHAR_MIN, CHAR_MAX );
  printf(" int %8d %20d %15d\n", sizeof(int), INT_MIN, INT_MAX );
  return 0;
}