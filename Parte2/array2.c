// Numero total de bytes de un array

#include <stdio.h>

main()
  {     
    
    int n_bytes;
    int arr[10];
    n_bytes = sizeof (int) * 10;
    printf( "El tam de int es  %d-byte.\n", sizeof (int));
    printf( "El array de 10 enteros tiene  %d bytes.\n", n_bytes);
    printf( "La direccion del primer elemento: %p\n", &arr[0]);
    printf( "La direccion del ultimo elemento: %p\n", &arr[9]);
    return 0;
 }