/* Usando el  tipo size_t. Los numeros negativos
 * no tienen sentido en este contexto.
*/

#include <stdio.h>

main(){

size_t sizet = -5;
printf("%d\n",sizet);
printf("%zu\n",sizet);
}