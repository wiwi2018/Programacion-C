/* Programa que copia una cadena en un array y ca
* cambia uno de sus caracteres
*/


#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[4];
    char *ptr = "eli"; //una cadena conteniendo 'e', 'l', 'i', '\0' 

    memset(arr, '\0', sizeof(arr)); // restablecer todos los bytes de modo que ninguno de los bytes con contengan valores 'basura'.
    strncpy(arr,ptr,sizeof("abc")); // Copy the string "abc" into the array arr 

    printf("\n %s \n",arr); // imprimimos el array como cadena  

    arr[0] = 'p'; // cambiamos el primer caracter en el array  

    printf("\n %s \n",arr);// otra vez imprimimos el array como cadena 
    return 0;
}