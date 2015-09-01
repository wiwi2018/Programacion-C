/*
 * Un programa para revertir un numero
 * No olvides de compilar gcc reverso.c -lm
 */
#include <stdio.h>
#include <math.h>


int rev(int, int);
 
int main()
{
    int num, resultado;
    int longitud = 0, temp;
 
    printf("Ingresar un numero entero para revertir: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        longitud++;
        temp = temp / 10;
    }
    resultado = rev(num, longitud);
    printf("El reverso de  %d es %d.\n", num, resultado);
    return 0;
}
 
int rev(int num, int len)
{
    if (len == 1)
    {
        return num;
    }
    else
    {
        return (((num % 10) * pow(10, len - 1)) + rev(num / 10, --len));
    }
}
