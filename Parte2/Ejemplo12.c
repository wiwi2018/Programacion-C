// Puntero a una constante

#include<stdio.h>

main(){
  
  int num = 5;
  const int limite = 500;
  int *pi; // Puntero a un entero 
  const int *pci;  // Puntero a un entero constante 

  pi = &num;
  pci = &limite;


printf("num-direccion: %p Valor: %d\n", &num, num);
printf("limite-direccion: %p Valor: %d\n", &limite, limite);
printf("pi-direccion: %p Valor: %p\n", &pi, pi);
printf("pci-direccion: %p Valor: %p\n", &pci, pci);


}