/* Programa en C, para hallar el rango
 * y precision de  valores numericos.
*/


#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	printf("Rango de  short integer: %d %d\n",SHRT_MAX,SHRT_MIN);
	printf("Rango de  integer: %d %d\n",INT_MAX,INT_MIN);
	printf("Rango de  long integer: %ld %ld\n",LONG_MAX,LONG_MIN);
	printf("max unsigned short integer: %u\n",USHRT_MAX);
	printf("max unsigned integer: %u\n",UINT_MAX);
	printf("max unsigned long integer: %lu\n",ULONG_MAX);
	printf("Rango de  float: %e %e\n",FLT_MAX,FLT_MIN);
	printf("precision de  float: %i\n",FLT_DIG);
	printf("Rango de  double: %E %E\n",DBL_MAX,DBL_MIN);
	printf("precision de  double: %i\n",DBL_DIG);
	printf("Rango de  long double: %LG %LG\n",LDBL_MAX,LDBL_MIN);
	printf("precision de  long double: %i\n",LDBL_DIG);
	printf("%e\n",HUGE_VAL);
	return(0);
}
