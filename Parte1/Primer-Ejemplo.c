/*
   Este Programa lee lineas de entrada, desde
   la entrada de estandar y imprime cada linea
   a la salida estandar.

   La primera entrada es lista en forma de
   columnas de numeros, que 
   finaliza con un numero entero negativo. 

   La columna de numeros son por pares y 
   especifica rangos de columnas desde 
   la linea entrada que seran impresas.

   Por ejemplo, 0 3 10 12 -1 indica que solo
   las columnas 0 a la 3 y la columna de 10 
   hasta a la 12, seran impresas
   
   */


#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_COLS      20   /* max # de columnas para procesar*/
#define MAX_INPUT    1000   /*max longitud de linea de entrada y de salida*/


int leer_numero_columnas(int columnas[], int max);
void reordenar(char *salida, char const *entrada,
				int n_columnas, int const columnas[]);

int 
main(void)
{
        int n_columnas;     /* # columnas para procesar*/
        int columnas[MAX_COLS];  /* las columnas para procesar*/
        char entrada[MAX_INPUT]; /* array para las linea de entrada*/
        char salida[MAX_INPUT];  /* array para las lineas de salida*/


  /*
     Lee la lista de la columna de numeros
    
  */

        n_columnas = leer_numero_columnas(columnas, MAX_COLS);

       /*
          Lee, procesa e imprime la lineas restantes de lines de entrada
       */


        while (gets(entrada) != NULL){
                printf("Entrada original: %s\n", entrada);
                reordenar(salida, entrada, n_columnas, columnas);
                printf("Linea reordenada:%s\n", salida);
        }

        return EXIT_SUCCESS;
}
                                    
 
/*

   Lee las lista de numero de columnas, ignorando mas alla
   de la que se especifica en el maximo de columnas

*/

int 

leer_numero_columnas(int columnas[], int max)
{
        int num = 0;
        int ch;

        /*Consiguiendo los numeros, parando cuando alcanzamos
          EOF o un valor negativo

          */

        while(num < max && scanf("%d", &columnas[num])==1
                        && columnas[num] >=0)
                num += 1;

        /*
           Cercioramos si tenemos un numero par de columnas
           ya que se supone que se deben emparejar

        */

        if (num %2 != 0){
                puts("El ultimo numero de la columna no es considerado. ");
                exit(EXIT_FAILURE);

        }

        /*
           Descartamos el resto de la linea que contenia el numero
           final
       */
        while((ch = getchar()) != EOF && ch != '\n')
                ;
        return num;
}

/*
   Procesa una linea de entrada por concatenacion los caracteres
   desde la columna indicada. La linea de salida es la terminada 
   con NUL

   */

void reordenar(char *salida, char const *entrada, int n_columnas,
 int const columnas[])
{
        int col;           /* Subindice para la columna de arrays*/
        int salida_col;      /* contador de la columna de salida */
        int len;           /* longitud de la linea de entrada */

        len = strlen(entrada);
        salida_col = 0;

        /* 
           Procesa cada par de numero de columnas

       */

        for (col = 0; col < n_columnas; col += 2){
                int nchars = columnas[col + 1] - columnas[col] + 1;

                /*
                   Si la linea de entrada no es de esta longitud
                   o  el array de salida esta lleno, hemos terminado

                   */

                if(columnas[col] >= len || salida_col == MAX_INPUT -1)
                        break;

                /*
                   Si no hay espacio en el array de salida, solo
                   se copia lo que se puede llenar
               
                 */

                if(salida_col + nchars > MAX_INPUT -1)
                        nchars = MAX_INPUT -salida_col -1;

                /*

                   Copia los datos relevantes
                */

                strncpy(salida + salida_col, entrada + columnas[col],
                        nchars);
                salida_col += nchars;
        }

        salida[salida_col] = '\0';
}






