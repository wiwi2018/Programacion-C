/*
* Calculamos he imprimimos todos los numeros primos
* Aprovechando que el numero 2 es el  unico
* primo par 
*/

#include <stdio.h>
int main()
{
  int numero;
  int divisor;
/*
* Uno y dos son faciles
*/
  

  printf("1\n2\n");
/* Solo el numero par 2 es primo...aprovechemos eso, 
 * miremos a los restantes impares
*/

  for(numero = 3; numero <= 30; numero = numero + 2){
/*
* Vemos si el algun divisor desde 3 hasta   numero divide al numero
*/
      for(divisor = 3; divisor < numero; divisor = divisor + 2){
	    if (numero %divisor ==0)
		break;
            }


/*Si el ciclo de arriba, para. debido a que el divisor es
* mayor que numero , tenemos entonces un numero primo
*/
if(divisor >=numero)
   printf("%d\n", numero);
        }
}