/*
 * Un programa en C para calcular el metodo de 
 * Gauss-Jordan
*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    float A[20][20],c,x[10];
    printf("\nIngresa la dimension de la matriz : ");
    scanf("%d",&n);
    printf("\nIngresa los elementos de la matriz aumentada :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    /* Ahora encontramos los elementos de la matriz diagonal  */
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                c=A[i][j]/A[j][j];      // Como calcular el pivote
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    printf("\nLa solucion es:\n");
    for(i=1; i<=n; i++)
    {
        x[i]=A[i][n+1]/A[i][i];
        printf("\n x%d=%f\n",i,x[i]);
    }
    return 0;
}
