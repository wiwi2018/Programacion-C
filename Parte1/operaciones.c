/*
 * Operaciones con punteros
 * Compila: usando gcc operaciones.c -lm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double Sum(double x, double y){return x + y;}
double Sub(double x, double y){return x - y;}
double Mul(double x, double y){return x * y;}
double Div(double x, double y){return x / y;}

// Arreglo de  5 punteros a  funciones que toma doubles como parametro 
// y retorna double :
double (*funcTabla[5])(double, double)
    = { Sum, Sub, Mul, Div, pow }; // Lista a inicializar.

 //Un array de punteros a cadenas para la salida: 
char *msgTabla[5] = { "Suma", "Diferencia", "Producto", "Cociente", "Potencia" };

int main( )
{
   int i;
   double x = 0, y = 0;
// Una variable indice
   
  printf( "Ingresa dos operandos para alguna operacion: :\n" );
 if ( scanf( "%lf %lf", &x, &y ) != 2 )
     printf( "Entrada invalida.\n" );
 for ( i = 0; i < 5; ++i )
  printf( "%10s: %6.2f\n", msgTabla[i], funcTabla[i](x, y) );
      return 0;
}