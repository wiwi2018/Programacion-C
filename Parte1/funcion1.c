/* Calculamos la adicion y imprime el resultado */

 #include <stdio.h>
/* Esta  funcion  agrega dos enteros y retorna el resultado  */

int suma_enteros( int x, int y )
{
  int resultado;
  resultado = x + y;
  return resultado;
}

int main()
{
  int sum;
  sum = suma_enteros( 5, 12);
  printf("La adicion de  5 y 12 es %d.\n", sum);
  return 0;
 }