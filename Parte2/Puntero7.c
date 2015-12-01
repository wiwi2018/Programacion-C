/*
** Programa que lee, ordena y imprime una lista de numeros.
*/
#include <stdlib.h>
#include <stdio.h>

/*
**	Funcion llamada por  'qsort ' para comparar valores enteros
*/
int
compara_enteros( void const *a, void const *b )
{
	register int	const *pa = a;
	register int	const *pb = b;

	return *pa > *pb ? 1 : *pa < *pb ? -1 : 0;
}

int
main()
{
	int	*arreglo;
	int	n_valores;
	int	i;

	/*
	** Mostramos cuanto valores tenemos
	*/
	printf( "Cuantos valores hay ? " );
	if( scanf( "%d", &n_valores ) != 1 || n_valores <= 0 ){
		printf( "Ilegal numero de  valores.\n" );
		exit( EXIT_FAILURE );
	}

	/*
	** Consigamos memoria para almacenarlos 
	*/
	arreglo = malloc( n_valores * sizeof( int ) );
	if( arreglo == NULL ){
		printf( "No se puede obtener memoria para esa cantidad de valores \n" );
		exit( EXIT_FAILURE );
	}

	/*
	** Leemos los numeros 
	*/
	for( i = 0; i < n_valores; i += 1 ){
		printf( "-> " );
		if( scanf( "%d", arreglo + i ) != 1 ){
			printf( "Error de lectura de valor #%d\n", i );
			exit( EXIT_FAILURE );
		}
	}

	/*
	** Ordenamos los valores
	*/
	qsort( arreglo, n_valores, sizeof( int ), compara_enteros );

	/*
	** Imprimimos los valores
	*/
	for( i = 0; i < n_valores; i += 1 )
		printf( "%d\n", arreglo[i] );

	/*
	** Liberamos la memoria y salimos.
	*/
	free( arreglo );
	return EXIT_SUCCESS;
}
