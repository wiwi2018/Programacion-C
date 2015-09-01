/* Programa en C que muestra el uso de la libreria
 * math con el uso de la raiz cuadra
 *
 *No olvides de compilar: gcc operador1.c -lm

 */

#include <math.h>
#include <stdio.h>

int main(){
		double x = 56;
		printf(" La raiz cuadrada aproximada de x es %g.\n",
						x >0? sqrt(x):0);
} 
