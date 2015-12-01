/*
 * Programa que ordena una matriz alfabeticamente 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void ordenar_cadena(char*);
 
int main()
{
   char cadena[100];
 
   printf("Enter some text\n");
   fgets(cadena, sizeof(cadena), stdin);
 
   ordenar_cadena(cadena);
   printf("%s\n", cadena);
 
   return 0;
}
 
void ordenar_cadena(char *s)
{
   int c, d = 0, longitud;
   char *pointer, *resultado, ch;
 
   longitud = strlen(s);
 
   resultado = (char*)malloc(longitud+1);
 
   pointer = s;
 
   for ( ch = 'a' ; ch <= 'z' ; ch++ )
   {
      for ( c = 0 ; c < longitud ; c++ )
      {
         if ( *pointer == ch )
         {
            *(resultado+d) = *pointer;
            d++;
         }
         pointer++;
      }
      pointer = s;
   }
   *(resultado+d) = '\0';
 
   strcpy(s, resultado);
   free(resultado);
}
