/* #include<stdio.h>
void fun1(int arr[])  
{
  int i;   
 
//sizeof no debe ser usado para obtener el numero de elementos de un array 
    
  int arr_tam = sizeof(arr)/sizeof(arr[0]); // uso incorrecto de  sizeof
  
  for (i = 0; i < arr_tam; i++) 
  {  
    arr[i] = i; // se ejecuta solo una vez.
  }
}
 
int main()
{
  int i;  
  int arr[4] = {0, 0 ,0, 0};
  fun1(arr);
   
   //uso de sizeof funciona aqui
  for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    printf(" %d " ,arr[i]);
 
  getchar();  
  return 0;
}     
*/


/* La funcion fun1() recibe un array como parametros y usa el operador sizeof para encontrar el numero
* de elementos de arr[], pero la expresion sizeof(arr)/sizeof(arr[0]) llega a ser 
* sizeof(int *)/sizeof(int) que resulta 1. (Los parametros en el array son tratados como punteros).
* y el bucle es ejecutado solo una vez, sin importar el tamaño del array. Un parametro para 
* la longitud del array debe ser pasado a la funcion fun1().
*/


#include<stdio.h>

void fun1(int arr[], size_t arr_tam)  
{
  int i;   
  for (i = 0; i < arr_tam; i++) 
  {  
    arr[i] = i;  
  }
}
 
int main()
{
  int i;  
  int arr[4] = {0, 0 ,0, 0};
  fun1(arr, 4);
   
  for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    printf(" %d ", arr[i]);
 
  getchar();  
  return 0;
}    