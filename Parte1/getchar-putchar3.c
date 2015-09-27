/* Usando funciones ctype y getchar
 * and putchar
*/

#include <stdio.h> 
#include <ctype.h> 

int main(void) { 
   int c; 
   for ( ; ; ) { 
      c = getchar(); 
      if (c == EOF) break;
      // Retorna true si c es LOWERCASE
      if (islower(c)) 
         c = toupper(c); 
      putchar(c); 
   } 
   return 0; 
} 