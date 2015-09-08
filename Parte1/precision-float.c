/*
 * Programa para ilustrar la precision 
 * del tipo float
 */

#include <stdio.h>
#include <float.h>

int main( )
{
  puts("\nCaracteristicas del tipo float\n");
  printf("Tamano de almacenamiento: %d bytes\n"
	  "Menor valor positivo : %E\n"
	  "Mayor valor positivo: %E\n"
	  "Precision: %d digitos decimales \n",
	  sizeof(float), FLT_MIN, FLT_MAX, FLT_DIG);
  puts("\nUn ejemplo de precision de float :\n");
  double d_var = 12345.6; // Una variable de tipo doble.
  float f_var = (float)d_var; // Initializa la variable 
			      // float con el valor de d_var.
  printf("El numero punto flotante "
	  "%18.10f\n", d_var);
  
  printf(" se ha alamacenado en una variable \n"
	  "de tipo float con el  valor"
	  "%18.10f\n", f_var);
  printf("El error de redondeo  es"
	"%18.10f\n", d_var - f_var);

  return 0;

}