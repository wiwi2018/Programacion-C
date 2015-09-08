/* Programa que demuestra el uso del tipo void
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // Proporciona los siguientes prototipos de funciones:
		    // void srand( unsigned int seed );
		    // int rand( void );
		    // void *malloc( size_t size );
		    // void free( void *ptr );
		    // void exit( int status );
enum { ARR_LEN = 100 };

int main( )
{
  int i,  // Obtenemos un poco de almacenamiento.
      *pNumberos = malloc(ARR_LEN * sizeof(int));
  if ( pNumberos == NULL )
  {
      fprintf(stderr, "Memoria insuficiente.\n");
      exit(1);
  }
      srand( (unsigned)time(NULL) ); //Inicializa el generador
				     // de numeros aleatorios
      for ( i=0; i < ARR_LEN; ++i )
	pNumberos[i] = rand( ) % 10000; // Almacena algunos numeros aleatorios.
	printf("\n%d  numeros aleatorios entre 0 y 9999:\n", ARR_LEN );
	for ( i=0; i < ARR_LEN; ++i ) // Bucle salida:
	{
	  printf("%6d", pNumberos[i]); // Imprime un numero por interacion del blucle
	  if ( i % 10 == 9 ) putchar('\n'); // y agrega una nueva linea despues de 10 numeros.
	}
	free( pNumberos ); // Liberamos el espacio de almacenamiento.
	return 0;
   }