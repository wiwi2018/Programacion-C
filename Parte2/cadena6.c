/*
** Criba de Eratostenes –– calculamos numeros primos usando un arreglo.
*/

#include <stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0

int   main()
{
  char   criba[SIZE]; // La criba
  char *sp;       // El puntero accede a la criba
  int numero;     // numero que estamos calculando
 
/* Ponemos toda la criba a TRUE */
   for( sp = criba; sp < &criba[ SIZE ]; )
     *sp++ = TRUE;

/*
Procesamos cada numero desde 3  hasta el numero 
de la criba 
*/
   
for( numero = 3; ; numero += 2 ){

  /*
   *Ponemos el puntero al elemento propio de la criba
   *paramos si nos pasamos  
   */
  sp = &criba[0] + (numero-3 )/2;
  if( sp >= &criba[ SIZE ] )
      break;
/*
 * Ahora avanzamos el puntero por multiplos del numero
 * y colocamos cada subsucesion FALSE.
*/
while( sp += numero, sp < &criba[ SIZE ] )
   *sp = FALSE;
}
/*
* Vamos a traves de la criba y imprimimos los numeros
* los numeros correspondiendo a las localizaciones que 
* permanecen TRUE.
*/
printf("El numero 2 es el primero\n");
for( numero = 3, sp = &criba[ 0 ];
  sp < &criba[ SIZE ]; numero += 2, sp++ ){
    if( *sp )
      printf( "%d\n", numero );
    }
  return EXIT_SUCCESS;
}
