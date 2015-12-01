/*
 * Un programa que muestra una permutacion de un arreglo dado.
 * 
 */

#include <stdio.h>
#include <time.h>

void muestraArreglo(char *arreglo[], int s);
void intercambio(int i, int j, char *arreglo[]);
void per(char *arreglo[], int s);


int main()
{
    char *palabras[] = {"a","b","c","d","e",
                     "f","g","h","i","j", "k", "l", "m","n",
		    "o", "p", "q", "r", "s","t","u", "v", "w",
		    "x", "y", "z"};
    int s = sizeof(palabras)/sizeof(palabras[0]);
    per(palabras,s);
    muestraArreglo(palabras,s);
    return 0;
}

//Recorremos el arreglo y  en cada interacion generamos un numero aleatorio 
//entre  0 y i y  intercambiamos este con el numero  en la  posicion i.
void per(char *arreglo[], int s) {
    int i,r;
    srand(time(NULL)); 
    for (i = s-1; i >= 0; i--) {
        r = rand() % (i + 1);
        intercambio(i,r,arreglo);
    }
}

void intercambio(int i, int j, char *arreglo[]) {
    char *temp = arreglo[i];
    arreglo[i] = arreglo[j];
    arreglo[j] = temp;
}

void muestraArreglo(char *arreglo[], int s) {
    int i;
    for (i=0; i<s; i++) {
        printf("%s \n", arreglo[i]);
    }
}

