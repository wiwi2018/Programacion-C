/* Lee los numeros desde el teclado
 * y imprime su promedio
 */

#include <stdio.h>
int main( )
{
  double x = 0.0, sum = 0.0;
  int count = 0;
  
  printf( "\t--- Calculando Promedios ---\n" );
  printf( "\nIngresar algunos numeros:\n"
"(Escribe una letra al final de tu entrada )\n" );
  
while (scanf( "%lf", &x ) == 1 )
{
  sum += x;
  ++count;
}

if ( count == 0 )
  printf( "No entrada de datos!\n" );
else
printf( "El promedio de numeros es %.2f\n", sum/count );
return 0;
}
