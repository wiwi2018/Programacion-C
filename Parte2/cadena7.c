/* Programa para ingresar una subcadena
 * dentro de una cadena
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void insert_subcadena(char*, char*, int);
char* subcadena(char*, int, int);
 
int main()
{
   char text[100], subcadena[100];
   int posicion;
 
   printf("Ingrese algun texto\n");
   fgets(text,sizeof(text),stdin);
 
   printf("Ingrese la subcadena a ingresar\n");
   fgets(subcadena, sizeof(subcadena), stdin);
 
   printf("Ingrese la posicion donde quiera poner la subcadena\n");
   scanf("%d", &posicion);
 
   insert_subcadena(text, subcadena, posicion);
 
   printf("%s\n",text);
 
   return 0;
}
 
void insert_subcadena(char *a, char *b, int posicion)
{
   char *f, *e;
   int longitud;
 
   longitud = strlen(a);
 
   f = subcadena(a, 1, posicion - 1 );      
   e = subcadena(a, posicion, longitud-posicion+1);
 
   strcpy(a, "");
   strcat(a, f);
   free(f);
   strcat(a, b);
   strcat(a, e);
   free(e);
}
 
char *subcadena(char *cadena, int posicion, int longitud) 
{
   char *pointer;
   int c;
 
   pointer = malloc(longitud+1);
 
   if( pointer == NULL )
       exit(EXIT_FAILURE);
 
   for( c = 0 ; c < longitud ; c++ ) 
      *(pointer+c) = *((cadena+posicion-1)+c);       
 
   *(pointer+c) = '\0';
 
   return pointer;
}
