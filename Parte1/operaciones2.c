/*Realice un programa que nos permita introducir un entero "n"
y sobre él se realicen varias operaciones.
*/


#include <stdio.h>

int primo(int);
void factorial(int);
void suma(int);

void main()
{
  int n;
  printf("Ingrese un valor entero positivo :");
  scanf("%d",&n);
  printf("El número %d :",n);
    if(primo(n)==1) printf("Es primo\n");
    else printf("No es primo\n");
    factorial(n);
    suma(n);
}

int primo(int N)
{
  
    // Una variable que se incrementa hasta el valor menor que N
  int x=2;
  
  //variable que retorna un valor que puede ser 1 o 0 dependiendo de si es primo o no
  int p=1;
    while(x<N)
  {
     if(N%x==0)
  {
      p=0;// No es primo
      break;
  }
    else x++;
  }
    return p;
    }
    
void factorial(int x)
{
    int F=1, i=1;
      while(i<=x)
    {
      F*=i;
      i++;
      }
       printf("El factorial de %d es %d\n",x,F);
    }
    
void suma(int x)
{
  int i, suma=0;
    for(i=1;i<=x;i++)
      suma=suma + i;
      printf("La suma de números desde 1 hasta %d es: %d\n", x, suma);
}