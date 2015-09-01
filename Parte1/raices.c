/* Programa en C para encontrar las raices de una ecuacion
 * cuadratica de coeficientes distintos de ceros. Si
 * hubiese algun error aparece un mensaje
 * 
 * No  te olvides de compilar: gcc raices.c -lm
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
  float a, b, c, raiz1, raiz2;
  float parteReal, parteImaginaria, discriminante;
  
  printf("Ingresa los valores de  a, b y c \n");
  scanf("%f %f %f", &a, &b, &c);

      // Descartamos a = 0, no tendriamos una ecuacion cuadratica*/
   if (a == 0 || b == 0 || c == 0)
   {
     
     printf("Error: Las raices no pueden ser   determinadas \n");
     exit(1);
   }
   else
   {
     discriminante = b * b - 4.0 * a * c;
     if (discriminante < 0)
     {
       printf("Raices imaginarias\n");
       parteReal = -b / (2.0 * a) ;
       parteImaginaria = sqrt(abs(discriminante)) / (2.0 * a);
       printf("raiz1 = %f  +i %f\n", parteReal, parteImaginaria);
       printf("raiz2 = %f  -i %f\n", parteReal, parteImaginaria);
       
    }
    else if (discriminante == 0)
    {
      printf("Las raices son reales e iguales\n");
      raiz1 = -b / (2.0 * a);
      raiz2 = raiz1;
      printf("raiz1 = %f\n", raiz1);
      printf("raiz2 = %f\n", raiz2);
      
    }
    else if (discriminante > 0 )
    {
      printf("Las raices son  reales y distintas \n");
      raiz1 =(-b + sqrt(discriminante)) / (2.0 * a);
      raiz2 =(-b - sqrt(discriminante)) / (2.0 * a);
      printf("raiz1 = %f  \n", raiz1);
      printf("raiz2 = %f  \n", raiz2);

      }

    }

}

