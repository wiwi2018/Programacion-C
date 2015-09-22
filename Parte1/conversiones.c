/* Menú de conversiones*/

#include <stdio.h>

float centi_fahr(float);
float fahr_centi(float);
float kilos_libras(float);
float libras_kilos(float);
int main()
{
  int opcion;
  float x;
  printf("1. Conversión de Centígrados a Fahrenheit\n");
  printf("2. Conversión de Fahrenheit a Centígrados\n");
  printf("3. Conversión de Kilogramos a Libras\n");
  printf("4. Conversión de Libras a Kilogramos\n");
  printf("5. Salir\n");
  printf("Ingrese una opción :");
  scanf("%d",&opcion);
      switch (opcion)
      {
	case 1:
      {

	printf("Ingrese la Temperatura en Centigrados :");
	scanf("%f",&x);
	printf("\nEl valor en Fahrenheit es : %f\n",centi_fahr(x));
	 break;
      }
	case 2:	
      {
	printf("Ingrese la Temperatura en Fahrenheit :");
	scanf("%f",&x);
	printf("\nEl valor en Centígrados es : %f\n",fahr_centi(x));
	  break;
      }
	case 3:
      {
	printf("Ingrese el peso en kilogramos :");
	scanf("%f",&x);
	printf("\nEl valor en Libras es : %f\n",kilos_libras(x));
      break;
      }
	case 4:
      {
	printf("Ingrese el peso en libras :");
	scanf("%f",&x);
	printf("\nEl valor en kilogramos es : %f\n",libras_kilos(x));
	break;
	}case 5:
	break;	
	}
	return 0;
    }
float centi_fahr(float v)
{
  float valor;
  valor = (1.8)*v + 32;
    return valor;
}

float fahr_centi(float v)
{
  float valor;
  valor = (v - 32)/1.8;
      return valor;
}

float kilos_libras(float v)
{
  float valor;
  valor=2.2*v;
    return valor;
}

float libras_kilos(float v)
{
  float valor;
  valor=v/2.2;
    return valor;
}