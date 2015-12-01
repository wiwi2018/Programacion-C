/* Uso del if-else utilizando la funcion srand
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int j1= 0;
  int j2 = 0;
  
  srand(time(NULL));
  j1= 1 + rand() % 10;

  int intentos = 4; /* Intentos que tenemos */

  while (intentos) {
      printf("Adivina un numero entre , 1 - 10: ");
      scanf("%d", &j2);
      
      if(j2 < j1)
	  printf("El numero que elegistes es muy bajo\n");
      else if(j2 > j1)
	  printf("El numero que elegistes es muy alto\n");
      else {
	  printf("Acertastes\n");
	  return 0;
      }
      intentos--; 
  }
  return 0;
}
