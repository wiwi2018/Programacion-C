/* Uso de switch en un el calculo de
 * aritmetica basica de dos numeros
 */

#include <stdio.h>

int main(int argc, char *argv[]) 
{
  char ch;
  int num1, num2;

  printf("\nBasicas operaciones:");
  printf("\nSuma [s]");
  printf("\nResta [r]");
  printf("\nMultiplicar [m]");
  printf("\nDividir [d]");

  printf("\nIngresa caracter para la  operacion:");
  scanf("%c", &ch);

  printf("\nIngresa dos numeros para las operaciones :");
  printf("\nIngresa num1=");
  scanf("%d", &num1);
  printf("\nIngresa num2=");
  scanf("%d", &num2);

  switch (ch) {
	case 's':
	  printf("\nSuma de  num1 y num2=%d", (num1+num2));
	  break;

	case 'r':
	   printf("\nResta  de  num1 y num2=%d", (num1-num2));
	  break;

	case 'm':
	    
	  printf("\nMultiplicacion de num1 y num2=%d", (num1*num2));
	  break;

	case 'd':
	  printf("\nDivision de  num1 y num2=%d", (num1/num2));
	   break;
	case 'x':
	  printf ("\nPrueba switch caso1");
	case 'y':
	  printf ("\nPrueba  switch caso2");
	default:
	  printf("\nInvalido valor ingresado");
	  break;
  }
  printf("\n");
  return 0;
}