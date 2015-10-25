// Conceptos de alcances o ambitos en C. Alcance en bloques de codigo.

#include<stdio.h>

int main()
{
  {
      int x = 10, y  = 20;
      {
          // El bloque exterior contiene declaración de x e y, por lo
          // que la siguiente declaración es válida y se  imprime 10 y 20
          printf("x = %d, y = %d\n", x, y);
          {
              //  y se declara de nuevo, asi en el bloque exterior y no es accesible
              int y = 40;
    
              x++;  // Cambia la variable del bloque exterior x a 11
              y++;  // Cambia variable y de este bloque a 41
      
              printf("x = %d, y = %d\n", x, y);
          }
 
          // Esta declaración tiene acceso a las variables  del bloque exterior
          printf("x = %d, y = %d\n", x, y);
      }
  }
  return 0;
}