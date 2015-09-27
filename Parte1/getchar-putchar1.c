/*Programa que convierte un archivo
 * a letras mayusculas.
 * En ASCII: Letras minusculas:97-122
 * 	     Letras mayusculas:65-90
 * 
 */


#include <stdio.h> 
int main(void) { 
   int c; 
   for ( ; ; ) { 
      c = getchar(); 
      if (c == EOF) break; 
if ((c >= 97) && (c < 123)) 
         c -= 32; 
      putchar(c); 
   } 
   return 0; 
} 