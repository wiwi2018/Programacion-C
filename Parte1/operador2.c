/* Ejemplo de algunos operadores en c */

#include <stdio.h>

int main()
{
  int x,y;
  x=7;
  y=4;
  
  printf("%i %i\n",x%y,x/y);
  /*(1)*/
  x+=y;
  printf("%i\n",x);    /*(2)*/
  
  x=y--;
  printf("x= %i, y= %i\n",x,y); /*(3)*/
  
  x=--y;
  printf("x= %i, y= %i\n",x,y);  /*(4)*/
  printf("%i\n",x*=y);          /*(5)*/
  return 0;
}
