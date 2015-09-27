/* Programa en C para calcular elementos de estadistica
 *basica.
 */

#include <stdio.h>
#include <stdlib.h> /* Generador de numeros aleatorios for random number generator */
#include <math.h>
#include <time.h>    /* inicializando el generador de numeros aleatorios */
#define N_Muestras 100

/* funcion prototipo */

void gdatos(double array[]);

void main()
{
  double datos[N_Muestras];
  double sum_x=0.0, sum_x2=0.0;
  double promedio, std_dev;
  int i;

  gdatos(datos);
  for (i=0; i < N_Muestras; ++i)
  {
    printf("%lf\n",datos[i]);
    sum_x=sum_x+datos[i];
    sum_x2=sum_x2+datos[i]*datos[i];
  }
  
  std_dev=sqrt((sum_x2-sum_x*sum_x/(double)N_Muestras)/((double)N_Muestras-1.0));
  promedio=sum_x/(double)N_Muestras;
  printf("promedio = %lf, desviacion estandar =  %lf\n",promedio,std_dev);
}

void gdatos(double datos[])
{
  int i;

  srand((unsigned)time(NULL)); /* Reinicializamos rand cada vez */
	    /* consiguienfo diferentes valores cada vez. */
  for (i=0; i < N_Muestras; ++i)
    datos[i]=(double)rand()/(double)RAND_MAX;
}
