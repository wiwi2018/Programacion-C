// Version corregida del programa realloc1.c

#include<stdio.h>
#include<stdlib.h>

int main()
{
        int *punt = (int *)malloc(sizeof(int)*2);
        int i;
        int *punt1;

        *punt = 10;
        *(punt + 1) = 23;

        punt1 = (int *)realloc(punt, sizeof(int)*3);
        *(punt1 + 2) = 30;
        for (i = 0;i < 3; i++)
                printf("%d", *(punt1 + i));

        getchar();
        return 0;
}
