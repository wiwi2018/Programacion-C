/*
 * Un programa en C, para multiplicar matrices, usando  Recursion
 */

#include <stdio.h>
 
void multiplicacion(int, int, int [][10], int, int, int [][10], int [][10]);
void muestra_multiplicacion(int, int, int[][10]);
 
int main()
{
    int a[10][10], b[10][10], c[10][10] = {0};
    int m1, n1, m2, n2, i, j, k;
 
    printf("Ingresa las filas y columnas de la matriz A : ");
    scanf("%d%d", &m1, &n1);
    printf("Ingresa las filas y columnas de la matriz B: ");
    scanf("%d%d", &m2, &n2);
    if (n1 != m2)
    {
        printf("La multiplicacion de estas matrices no es posible .\n");
    }
    else
    {
        printf("Ingresa los elementos de la matriz A :\n");
        for (i = 0; i < m1; i++)
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n Ingresa los elementos en la matriz B:\n");
        for (i = 0; i < m2; i++)
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
        multiplicacion(m1, n1, a, m2, n2, b, c);
    }
    printf("La multiplicacion de A y  B es:\n");
    muestra_multiplicacion(m1, n2, c);
}
 
void multiplicacion (int m1, int n1, int a[10][10], int m2, int n2, int b[10][10], int c[10][10])
{
    static int i = 0, j = 0, k = 0;
 
    if (i >= m1)
    {
        return;
    }
    else if (i < m1)
    {
        if (j < n2)
        {
            if (k < n1)
            {
                c[i][j] += a[i][k] * b[k][j];
                k++;
                multiplicacion(m1, n1, a, m2, n2, b, c);
            }
            k = 0;
            j++;
            multiplicacion(m1, n1, a, m2, n2, b, c);
        }
        j = 0;
        i++;
        multiplicacion(m1, n1, a, m2, n2, b, c);
    }
}
 
void muestra_multiplicacion(int m1, int n2, int c[10][10])
{
    int i, j;
 
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
