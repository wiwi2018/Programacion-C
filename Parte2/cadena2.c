 #include <stdio.h>

    #include <string.h>

    #include <stdlib.h>

     

    int main()

    {

        int i = 0, l = 0, j, k, espacio = 0, cuenta = 0, init = 0, min = 0, max = 0, len = 0, avis;

        char a[100], b[30][20], c[30], d[30], minP[30], maxP[30];

     

        printf(":\n");

        fflush(stdin);

        scanf("%[^\n]s", a);

        for (i = 0;a[i] != '\0';i++) 

        {

            if (a[i] == ' ')

                espacio++;

        }

        i = 0;

        for (j = 0;j<(espacio+1);i++, j++)

        {

            k = 0;

            while (a[i] != '\0')

            {

                if (a[i] == ' ')

                {

                    break;

                }

                else

                {

                    b[j][k++] = a[i];

                    i++;

                }

            }

            b[j][k] = '\0';

        }

        for (j = 0;j < espacio + 1;j++)

            printf("%s ", b[j]);

        printf("\n");

        for (i = 0;i < espacio + 1;i++)

        {

            strcpy(c, b[i]); 

            cuenta = strlen(b[i]);

            k = 0;

            for (l = cuenta - 1;l >= 0;l--)

                d[k++] = b[i][l];

            d[k] = '\0';

            if (strcmp(d, c) == 0)                {

                avis = 1;

            if (init < 1) 

            {

                strcpy(minP, d);

                strcpy(maxP, d);

                min = strlen(minP);

                max = strlen(maxP);

                init++;

            }

            printf("La cadena %s es un polindromo\n", d);

            len = strlen(d);

            if (len >= max)

                strcpy(maxP, d);

            else if (len <= min)

                strcpy(minP, d);

            else

                printf(" ");

            }

        }

        if (avis == 1)

        {

            printf("El minimo polindromo es %s\n", minP);

            printf("El maximo palindrome es %s\n", maxP);

        }

        else

            printf("Dado una cadena no tiene un polindromo\n");

    }