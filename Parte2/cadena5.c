/*
 * Verificando el nombre de los planetas usando un 
 * arreglo 1-dimensional
 */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETAS 9

int main(int argc, char *argv[])
{
  
  char *planetas[] = {"Mercurio", "Venus", "Tierra",
                   "Marte", "Jupiter", "Saturno", "Urano", 
		   "Neptune","P1uton"};
int i, j;
for (i = 1; i<argc; i++){
  
  for (j = 0; j< NUM_PLANETAS; j++)
      if (strcmp(argv[i], planetas[j]) == 0) {
	printf("%s es una planeta %d\n", argv[i], j + 1);
	  break;
	}
  if (j == NUM_PLANETAS)
      printf("%s no es un planeta\n", argv[i]);
    }
return 0;
}

