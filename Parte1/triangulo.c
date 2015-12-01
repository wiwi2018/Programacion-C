/* Clasificando los tipos de triangulo dado
 * la longitud de sus lados
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
  float  a;
  float  b;
  float  c;
  float  temp;
  
  /*
   Solicitamos y leemos los datos
   */
  
  printf("Ingresar las longitudes de los tres lados del triangulo: ");
  scanf("%f %f %f", &a, &b, &c);
  
  /*
   * Reordenamos los valores tal que a es el de mayor longitud
   * y c es de menor longitud
   */
  
  
if( a < b ){
  
    temp = a;
    a = b;
    b = temp;
}
if( a < c ){
   temp = a;
   a = c;
   c = temp;
}
if( b < c ){
   temp = b;
   b = c;
   c = temp;
}

/* Ahora veamos que tipo de triangulo es. Notamos que si
 * uno de los lados es <= 0 o si dos de lados juntos es 
 * menor que el mayor, entonces no son triangulos
 */

if (c <= 0 || 	 b +c  < a)
  printf("No es un triangulo.\n");

else if(a == b && b==c)
  printf("Equilatero.\n");
else if	(a ==b || b ==c)
  printf("Isosceles.\n");
else
  printf("Escaleno.\n");
return EXIT_SUCCESS;
}
