/* Dibuja figuras geometricas geometricas de tamano
 * ingresado por el usuario
 */

#include <stdio.h>

  void rombo (int n);
  void triangulo1 (int n);
  void triangulo2 (int n);
  
  void main (void)
  {
    int n;
    printf("\n Ingrese un entero mayor que 1: ");
    scanf("%d",&n);
    printf("\n Rombo de diagonal %d:\n", 2*n + 1);
    rombo(n);
    printf("\n Triangulo de altura %d y ancho %d:\n", 2*n - 1, n);
    triangulo1(n);
    printf("\n Triangulo de altura %d y ancho %d:\n", n, 2*n - 1);
    triangulo2(n);
    printf("\n");
    }
    
// Dibuja un rombo de diagonal 2n + 1
void rombo (int n)

{
  int x, y;
  for (y = -n; y <= n ; y++)
  {
      for (x = n; x >= -n; x--)
	  if ( (abs(x) + abs(y)) <= n ) printf("*");
	  else printf(" ");
      printf("\n");
    }
}

// Dibuja un triangulo (rodado) de ancho n y altura 2n -1
void triangulo1 (int n)
{
    int x, y;
      for (y = 1; y < n ; y++)	
{
    for (x = 1; x <= y; x++)
      printf("*");
       printf("\n");
}
  for ( ; y > 0 ; y--){
   for (x = 1; x <= y; x++)
     printf("*");
      printf("\n");
    }
}

// Dibuja un triangulo (de manera usual) de altura n y ancho 2n -1
void triangulo2 (int n)
{
  int x, y;
  for (y = n-1; y >= 0; y--)
  {
    for (x = -n+1; x <= n-1; x++)
      if ( (abs(x) + abs(y)) <= n-1 ) printf("*");
      else printf(" ");
    printf("\n");
    }
}