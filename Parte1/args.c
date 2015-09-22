/*
 * Este program imprime su propio nombre y los 
 * argumentos de la linea de comandos que se recibieron desde el sistema operativo
 */


#include <stdio.h>

int main( int argc, char *argv[ ] )
{
  
  if ( argc == 0 )
    puts( "Linea de comando no disponible." );
  else
  {
   // Imprime el nombre del programa.
  printf( " El programa esta corriendo : %s\n", argv[0] );
  if ( argc == 1 )
    puts( " argumentos no recibidos en la linea de comandos." );
  else
  {
    puts( "Argumentos de la linea de comandos:" );
    for ( int i = 1; i < argc; ++i )
  // Imprime cada argumento sobre una linea separada
	puts( argv[i] );
    }
  }
}