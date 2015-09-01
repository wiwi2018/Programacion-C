/*Ingresamos un numero y escribimos sus cifras 
 * en sentido contrario.
 */

#include <stdio.h>
 
int main()
{
   int n, reverso = 0;
 
   printf("Ingresa un numero  para  revertir\n");
   scanf("%d", &n);
 
   while (n != 0)
   {
      reverso = reverso * 10;
      reverso = reverso + n%10;
      n       = n/10;
   }
 
   printf("El reverso de un numero ingresado es = %d\n", reverso);
 
   return 0;
}