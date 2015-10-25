// Usando if anidados en programas en C 
#include <stdio.h>

main()
{
  int i;
  for (i=-5; i<=5; i++){
    if (i > 0)
      if (i%2 == 0)
	printf("%d es un numero par.\n", i);
      else
	printf("%d es un numero impar.\n", i);
      else if (i == 0)
	printf("El numero es cero .\n");
      else
	printf("Numero negativo: %d\n", i);
    
  }
return 0;
}