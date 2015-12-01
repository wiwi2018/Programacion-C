/*
 * Programa en C que lee dos matrices A y B  y lleva a cabo la adicion 
 * o resta de  A y  B. Tambien encuentra la traza de la matriz resultante.
 * Muestra las  matrices, sus sumas o resta y la traza
 */

#include <stdio.h>
void traza(int arr[][10], int m, int n);
 
void main()
{
    int matriz1[10][10], matriz2[10][10], matrizsuma[10][10],
    matrizresta[10][10];
    int i, j, m, n, opciones;
 
    printf("Ingresa el orden de las matrices  matriz1 y  matriz2 \n");
    scanf("%d %d", &m, &n);
    printf("Ingresa los elementos de matriz1 \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Los elementos de la primera matriz  son \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("Ingresa los elementos de  matriz2 \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }
    printf("Los elementos de la segunda matriz  son \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("Ingresa tus opciones: 1 para la suma  y  2 para la resta \n");
    scanf("%d", &opciones);
    switch (opciones)
    {
    case 1:
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                matrizsuma[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        printf("La matriz suma es \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d", matrizsuma[i][j]) ;
            }
            printf("\n");
        }
        traza (matrizsuma, m, n);
        break;
    case 2:
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                matrizresta[i][j] = matriz1[i][j] - matriz2[i][j];
            }
        }
        printf("La matriz resta es \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d", matrizresta[i][j]) ;
            }
            printf("\n");
        }
        traza (matrizresta, m, n);
        break;
    }
 
}
/* Funcion para encontrar la traza de una funcion dada y que se imprime  */

void traza (int arr[][10], int m, int n)
{
    int i, j, traza = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                traza = traza + arr[i][j];
            }
        }
    }
    printf("La traza de la matriz  resultantante es = %d\n", traza);
}
