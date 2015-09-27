/* Ejemplo de llamada por valor en C
 */


#include <stdio.h>

void fun(int a,int b);

int main()
{ 
  
  int x,y ;
  x=y =5;
   fun(x,y);
  printf("Despues de  evaluar la llamada de la funcion 'fun' \n %i a %i\n",x,y);
  return 0;
}

void fun(int a, int b)
{
   a=a+1;
   b=b+2;
   printf("Los valores al evaluar la llamada de  funcion 'fun' \n %i %i\n",a,b);
}


