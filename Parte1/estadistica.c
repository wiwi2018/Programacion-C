/*
 *  Un programa donde se ingresan datos y encontramos la media,
 * la  varianza
 * y la desviacion estandar 
 */


#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
 
void main()
{
    float x[MAXSIZE];
    int  i, n;
    float promedio, varianza, std, sum = 0, sum1 = 0;
 
    printf("Ingresar el valor de N \n");
    scanf("%d", &n);
    printf("Ingresar  %d numeros reales \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Calculamos la suma de todos los elementos */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    promedio = sum / (float)n;
    /*  Calculamos la  varianza  y la desviacion estandar */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - promedio), 2);
    }
    varianza = sum1 / (float)n;
    std = sqrt(varianza);
    printf("El promedio de todos los elementos = %.2f\n", promedio);
    printf("La varianza de todos los elementos = %.2f\n", varianza);
    printf("La desviacion estandar es = %.2f\n", std);
}

