/* El siguiente programa es un ejemplo en 
 * que se manipulan punteros con varios niveles
 * de indireccion
 */

#include <stdio.h>
int main()
{
		int i;
		int *ptrToi;
		int **ptrToPtrToi;

		ptrToPtrToi = &ptrToi;
		ptrToi  = &i;

		i = 10;        // Asignacion directa
		*ptrToi = 20;  // Asignacion indirecta
		**ptrToPtrToi = 30;  // Asignacion con doble indireccion

		return 0;
}


