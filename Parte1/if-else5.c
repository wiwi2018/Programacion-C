/*
 Uso de la declaracion if-else-if-else y la funcion
 srand en un juego de adivinanza
 */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int j1 = 0;
  int j2 = 0;
  
  srand(time(NULL));
  j1 = 1 + rand() % 10;
  
  printf("Adivina un numero entre, 1 - 10: ");
  scanf("%d", &j2);

  /* Intento 1 */
  
  if(j2 < j1)
    printf("Tu numero es muy bajo\n");
  else if(j2 > j1)
    printf("Tu numero es muy alto\n");
  else {
    printf("Acertastes!\n");
    return 0;
  }

/* Intento 2 */

  printf("Adivina un numero entre, 1 - 10: ");
  scanf("%d", &j2);

  if(j2 < j1)
    printf("Tu numero es muy bajo\n");
  else if(j2 > j1)
    printf("Tu numero es muy alto\n");
  else {
    printf("Acertastes!\n");
    return 0;
  }

/* Intento 3 */

  printf("Adivina un numero entre, 1 - 10: ");
  scanf("%d", &j2);

  if(j2 < j1)
    printf("Tu numero es muy bajo\n");
  else if(j2 > j1)
    printf("Tu numero es muy alto\n");
  else {
    printf("Acertastes!\n");
    return 0;
  }

/*  Intento 4  */

  printf("Adivina un numero entre, 1 - 10: ");
  scanf("%d", &j2);

  if(j2 < j1)
    printf("Tu numero es muy bajo\n");
  else if(j2 > j1)
    printf("Tu numero es muy alto\n");
  else
    printf("Acertastes!\n");  

  printf("El numero correcto es, %d\n", j1);

  return 0;
}
