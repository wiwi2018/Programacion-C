// Programa que muestra el uso del operador sizeof

#include <stdio.h>

main()
{
   int a = 4;
   short b;
   double c;
   int* ptr;

   /* ejemplo del operador sizeof */
   printf("1 - Tam. de la variable a = %d\n", sizeof(a) );
   printf("2 - Tam. de la variable b = %d\n", sizeof(b) );
   printf("3 - Tam. de la variable c= %d\n", sizeof(c) );

   // ejemplo  de los operadores & y  *  //
   ptr = &a;	/* 'ptr' ahora  contiene la direccion de  'a'*/
   printf("El valor de  a es  %d\n", a);
   printf("*ptr es %d.\n", *ptr);

   /* ejemplo del operador ternario */
   a = 10;
   b = (a == 1) ? 20: 30;
   printf( "El valor de  b es %d\n", b );

   b = (a == 10) ? 20: 30;
   printf( "El valor de  b es %d\n", b );
}