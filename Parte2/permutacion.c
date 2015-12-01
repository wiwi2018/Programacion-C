/* Programa que genera  permutaciones de n elementos
   si todos los puntos de la n! posibles permutaciones tienen
   la misma probabilidad de ser generados
*/

#include <stdio.h>
#include <stdlib.h>

// Esto retorna una permutacion aleatoria de  0..n-1
int * permutacion(int n) {
    int *a = malloc(n*sizeof(int));
    int k;
    for (k = 0; k < n; k++)
	a[k] = k;
    for (k = n-1; k > 0; k--) {
	int j = rand() % (k+1);
	int temp = a[j];
	a[j] = a[k];
	a[k] = temp;
    }
    return a;
}

// Imprime 8 elementos por linea

void imprimearreglo(int n, int a[n]) {
    int k = 0;
    for (k = 0; k < n; k++) {
	printf("%6d   ", a[k]);
	if (k % 8 == 7)
	    printf("\n");
    } 
}

int main(void) {
    int limite = 10;
    int *a;
    int k;
    // Imprime  10 permutaciones
    for (k = 0; k < 10; k++) {
	a = permutacion(limite);
	imprimearreglo(limite, a);
	printf("\n");
    }
    
    return 0;
}
