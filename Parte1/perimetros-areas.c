 /* Programa para encontrar el  perimetro y area de un circulo
 *  rectangulo y triangulo equilatero
 * 
 * No olvides de compilar: gcc perimetros-areas.c -lm
 */

#include <stdio.h>
#include <math.h>
#define PI 3.142
#define RAIZTRES 1.733

int main()

{
  
  float radio, longitud, s, ancho, a, b, c, altura;
  int n;
  float perimetro, area;

  //perimetro y area de un  rectangulo
  printf(" \n El perimetro del rectangulo \n");
  printf("\n Ingresa el ancho y la  longitud del rectangulo :\n");
  scanf("%f%f", &ancho,& longitud);
  perimetro = 2 * (ancho + longitud);
  printf("El perimetro del rectangulo es: %.3f\n", perimetro);
  printf(" \n El area  del rectangulo \n");
  area = ancho * longitud;
  printf(" El area del rectangulo es: %3.4f\n", area);
  printf("---------------------------------------------------------\n");
  
  //perimetro y area de un  triangulo
  printf("\n El perimetro de un triangulo \n");
  printf("\n Ingresa la longitud de los lados  : \n");
  scanf("%f%f%f", &a, &b, &c);
  perimetro = a + b + c;
  printf("El perimetro de un triangulo es: %.3f\n", perimetro);
  printf("\n El  area del triangulo es \n");
  s = (a + b +c)/2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("El area de un triangulo es = %f \n", area);
  
  printf("-------------------------------------------------------\n");
  
   //perimetro y area de un  circulo
   
  printf(" \n El perimetro de un circulo \n");
  //printf("------------------------------------------\n");
  printf("\n Ingresa el radio del  circulo : \n");
  scanf("%f", &radio);
  perimetro = 2 * PI * radio;
  printf("El perimetro de circulo es: %.3f\n", perimetro);
  printf("\n El Area de un circulo\n");
  area = PI*pow(radio, 2);
  printf("El area de un circulo es = %5.2f\n", area);
  
  printf("--------------------------------------------------------\n"); 
  //perimetro y area de un triangulo equilatero
 
  printf(" \n Perimetro de un triangulo equilatero \n");
  printf("\n Ingresa un lado del triangulo equilatero : \n");
  scanf("%f", &a);
  perimetro = 3 * a;
  printf("El perimetro de un triangulo equilatero es: %.3f\n", perimetro);
  printf("\n Area  de un triangulo equilatero \n");
  area = (RAIZTRES/4)*pow(a,2);
  printf("El area de un triangulo equilatero es = %4.3f\n", area);
 
  printf("--------------------------------------------------------\n");
 //perimetro y area de un triangulo rectangulo

  printf(" \n El perimetro de un triangulo rectangulo \n");
  printf("\n Ingresa el ancho y la  altura del triangulo rectangulo:\n ");
  scanf("%f%f", &ancho, &altura);
  perimetro = ancho + altura + sqrt(ancho * ancho + altura * altura);
  printf("El perimetro del triangulo rectangulo es : %.3f\n", perimetro);
  printf("\n El area del triangulo rectangulo \n");
  area = (ancho * altura)/2;
  printf("El area del triangulo rectangulo es: %3.4f\n", area);

  return 0;

    }