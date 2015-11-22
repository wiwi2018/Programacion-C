// Uso de las funciones de la  libreria string.h 

#include<stdio.h>
#include <string.h>
#include<stdlib.h>


int main() {
	int size;
	char *cad = "hola soy una cadena";   
	char *n_cad = NULL;
	char *ptr = NULL;

	printf("%s\n", cad);  // imprime  "hola soy una cadena"
	size = strlen(cad);
	n_cad = malloc(sizeof(char)*(size+1)); // necesita espacio para  '\0'
	if(n_cad == NULL) { 
		printf("malloc ha fallado\n"); 
	}
	strncpy(n_cad, cad, 6);
	strcat(n_cad, "oy");
	printf("%s\n", n_cad);	// imprime  "hola soy"
	if((ptr = strstr(n_cad, "oy")) != NULL) {
		printf("%s\n", ptr);	// imprime  "oy"
	}
	free(n_cad);
}
