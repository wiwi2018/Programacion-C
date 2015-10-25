// Programa que muestra  el efecto de conversion de tipos de datos (cast).


#include <stdio.h>

main()
{
	int punt_total,num_estudiantes;
	float promedio;

	printf("Escriba la  suma de las puntuaciones: ");
	scanf("%d",&punt_total);
	printf("Ingresa el numero de estudiantes: ");
	scanf("%d",&num_estudiantes);

	promedio=punt_total/num_estudiantes;
	printf("La puntuacion promedio (sin cast) es %.2f\n",promedio);

	promedio=punt_total/(float)num_estudiantes;
	printf("La puntuacion promedio (con cast) es %.2f\n",promedio);
	return(0);
}