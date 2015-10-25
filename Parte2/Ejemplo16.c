// Declarando un array de punteros de caracteres


#include<stdio.h>

int main()
{
    // Declarando /Inicializando tres punteros caracteres
    char *ptr1 = "Python";
    char *ptr2 = "C";
    char *ptr3 = "R"; 

    //Declarando un array de 3 punteros caracteres
    char* arr[3]; 

    // Inicializando el  array con valores
    arr[0] = ptr1;
    arr[1] = ptr2;
    arr[2] = ptr3; 

    // Imprimiendo los valores almacenados en el array t
    printf("\n [%s]\n", arr[0]);
    printf("\n [%s]\n", arr[1]);
    printf("\n [%s]\n", arr[2]); 

    return 0;
}