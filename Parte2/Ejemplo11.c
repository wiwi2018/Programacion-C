/* Los tipos intptr_t y uintptr_t. Estos tipos de
 *datos son usados para almacenar para almacenar
 *direcciones de punteros.
 */

#include <stdio.h>
#include <stdint.h>


main(){
  
int num;
char c;
intptr_t *pi = &num;
uintptr_t *pu = (uintptr_t*)&num;
uintptr_t *pc = (uintptr_t*)&c;
printf("%p\n",&pi);
printf("%p\n",&pu);
printf("%p\n",&pc);
}