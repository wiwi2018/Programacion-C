/*
 Ejemplo de conversion de palabras en frances a ingles usando 
 estructuras de control y un puntero a array
 */
#include <stdio.h>
char * palabras[] = { "Zero", "Un", "Deux", "Trois", "Quatre", "Cinq", "Six",
"Sept", "Huit", "Neuf"};
main ()
{
  int i, s, salida_numero;
  int revnum = 0;
  printf("Ingresar un numero \n");
  scanf("%i", &i);
  while(i > 0)
  {
    salida_numero = i% 10;  //quitamos el ultimo digito
    revnum = revnum * 10 + salida_numero;
    //printf("%i\n", salida_numero);  
    i = i/10;
    
    s = revnum;
   // printf("\n\n");
    while(revnum > 0)
    {
      salida_numero = revnum %10; //quitamos el ultimo digito
      //printf("%i\n", salida_numero);
      revnum /= 10;
    } 
   // printf("\n\n");
    
    /*Ahora imprimimos cada digito con palabras en ingles
     */
    
    while (s >0)
    {
      salida_numero = s % 10;   //quitamos el ultimo digito
      printf("%i\t", salida_numero);
      //printf("%s\t", palabras[salida_numero]);
      
      switch(salida_numero)
      {
	case 0:
	  printf("Zero\n");
	  break;
	case 1:
	  printf("One\n");
	  break;
	case 2:
	  printf("Two\n");
	  break;
	case 3:
	  printf("Three\n");
	  break;
	case 4:
	  printf("Four\n");
	  break;
	case 5:
	  printf("Five\n");
	  break;
	case 6:
	  printf("Six\n");
	  break;
	case 7:
	  printf("Seven\n");
	  break;
	case 8:
	  printf("Eight\n");
	  break;
	case 9:
	  printf("Nine\n");
	  break;
      }
      
      s /= 10;   //Dividimos el actual numero por 10
    }
    
  }
}
