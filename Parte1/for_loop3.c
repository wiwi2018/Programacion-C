/*Ejemplo de convertir numeros[0-15] a numeros hexadecimales */
#include <stdio.h>

main()
{
  int i;
  printf("Hex(Mayuscula)   Hex(minuscula)   Decimal\n");
  for (i=0; i<16; i++){
    printf("%X                %x                %d\n", i, i, i);
     }
    return 0;
  
}
