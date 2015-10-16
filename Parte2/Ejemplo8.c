/* Uso de puntero a void. Un puntero a int es 
* asignado a un puntero a void  y entonces regresa
* a puntero a int-
*/

#include <stdio.h>

main(){

int num;
int *pi = &num;
printf("Valor de pi: %p\n", pi);
void* pv = pi;
pi = (int*) pv; // cast
printf("Valor de pi: %p\n", pi);
}