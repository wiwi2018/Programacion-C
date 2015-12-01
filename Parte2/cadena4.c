/* Uso de las funciones de la libreria string.h en un
 * arreglo de caracteres
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[255];
    printf("Ingresa una cadena : "); fgets(str,255, stdin);
    printf("Esta es tu cadena que has escrito: %s\n", str);

    //Ahora recorramos esta cadena y que se convierta toda en minuscula

    int i;
    for(i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);     // Usamos la funcion tolower()
    }

    printf("Aqui tienes la version en minuscula de tu cadena : %s\n", str);    

    //Ahora recorramos esta cadena y que se convierta toda en minuscula

    int j;
    for(j = 0; str[j]; j++)
    {
        str[j] = toupper(str[j]); //Usamos la funcion toupper()
    }
    printf("Aqui tienes la version en mayuscula de tu cadena: %s\n", str);    

    return 0;
}
