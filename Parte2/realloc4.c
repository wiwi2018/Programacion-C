/* Otro programa que muestra el uso de Realloc en un programa en C */

/*El tamaño de memoria asignada debe ser mayor que los datos que se
 * van a colocar en el espacio asignado 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    // Definimos las variables requeridas  
    char *punt1, *punt2;
    size_t longitud1, longitud2;

    // Definimos la cantidad de memoria requerida  
    longitud1 = 10;
    longitud2 = 30;

    // Asignamos de memoria para una cadena
    punt1 = (char *)malloc(longitud1);

    // Verificamos que todo ha salido correctamente
    if (punt1 == NULL)
    {
        // Mostramos un mensaje 
        printf("No se pudo asignar memoria\n");
        exit(1);
    }

    // Copiemos una cadena en la memoria asignada 
    strcpy(punt1, "Python y R");

    // No tenemos suficiente memoria para completar la cadena

    // Expandimos la variable disponible con realloc 
    punt2 = (char *)realloc(punt1, longitud2);

    // Verificamos que todo ha salido correctamente   
    if (punt2 == NULL)
    {
        // Mostramos un mensaje 
        printf("No podemos re-asignar la memoria requerida\n");
        exit(1);
    }

    // Agregamos el resto del mensaje en la cadena 
    strcat(punt2, " son lenguajes");

    // Mostramos la cadena completa 
    printf("%s\n", punt2);

    // Liberamos la memoria asignada 
    free(punt2);

    return 0;
}