/* Programa que muestra el uso de la funcion malloc en un programa en c */

/* El tamaño de memoria asignada debe ser mayor que los datos que
 * se van a colocar en el espacio asignado 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    // Definimos las variables requeridas 
    char *punt;
    size_t longitud;
    
    // Definimos la cantidad de memoria requerida 
    longitud = 50;
    
    // Asignamos memoria para una cadena  
    punt = (char *)malloc(longitud);
    
    // Verificamos que todo ha salido correctamente 
    if (punt == NULL)
    {
        // Mostramos un mensaje  
        printf("No se pudo asignar memoria \n");
        exit(1);
    }
    
    // Copiemos una cadena en la memoria asignada
    strcpy(punt, "C, Python y R");
    
    // Muestra el contenido de la memoria 
    printf("%s\n", punt);
    
    // Liberamos la memoria que hemos asignado 
    free(punt);
    
    return 0;
}