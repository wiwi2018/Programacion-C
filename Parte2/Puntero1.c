#include <stdio.h>
#include <stdlib.h>

main(){
     
  int x, *p;

    p = &x;           /* inicializamos el  puntero */
    *p = 0;         /* ponemos x a cero */
      
    printf("x es %d\n", x);
    printf("*p es %d\n", *p);

    *p += 1;        /* incrementa lo que  p apunta */
    printf("x es %d\n", x);

      
    (*p)++;         /* incrementa lo que  p apunta */
    printf("x es %d\n", x);

     exit(EXIT_SUCCESS);
}