// Programa sobre la inicializacion de un array

 #include <stdio.h>

  main()
  {
     int i;
     int arr[10];

     for (i=0; i<10; i++){
       arr[i] = i + 1;
       printf( "arr[%d] es inicializado con %d.\n", i, arr[i]);
    }
    return 0;
 } 