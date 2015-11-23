/* Ejemplo del uso de punteros y de cadenas y el uso de una 
* alternativa a la funcion strcpy
*/

#include <stdio.h>

char cad1[80] = "Python-C";
char cad2[80] = "12345678901234567890123";
int main(void)
{

    char *pA;     /* un puntero al tipo caracter */
    char *p2;     /* otro puntero al tipo caracter  */
    puts(cad1);   /* Muestra la cadena cad1 */
    pA = cad1;    /* apunta pA a la cadena cad1 */
    puts(pA);     /* Muestra que  pA esta apuntando */
    p2 = cad2;    /* apuntamos p2 a la cadena cad2 */
    putchar('\n');       /* movemos una linea hacia abajo en la pantalla */
    while(*pA != '\0')  
    {
        *p2++ = *pA++;  
    }
    *p2 = ' ';          
    puts(cad2);        
    return 0;
}
