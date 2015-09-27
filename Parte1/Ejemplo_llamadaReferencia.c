/* Ejemplo de llamada por referencia en C
 */

#include <stdio.h>

void fun(int *p,int *q);

int main()
{ 
  int x,y;
   x=y=5;
   fun(&x,&y);
   printf("%d %d\n",x,y);
  return 0;
}


void fun(int *p,int *q)
  {
     *p=*p+1;
     *q=*q+2;
      printf("%d %d\n",*p,*q);
  }