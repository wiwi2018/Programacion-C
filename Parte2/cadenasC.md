# Cadenas en C

Una cadena en C, es un array de valores char, que terminan en un caracter especial
`\0`. Por ejemplo, aquí tenemos  una cadena, que es inicializada en `mili`.

```c
char str[5];  // espacio para los char en str más '\0'
str[0] = 'm';
str[1] = 'i';
str[2] ='l';
str[3]= 'i';
str[4] ='\0';
printf("%s\n", str) // print mili a stdout
```

## Funciones para cadenas en C

C proporciona librerías para C. Funciones para cadenas de la librería estándar de C no asignan espacio para las cadenas  que manipulan, ni comprueban que si se pasan  cadenas válidas; le corresponde a tu programa  asignar espacio para las cadenas que la librería de  C utilizará. Llamar a funciones para el manejo de  cadenas con valores de dirección incorrectos causará una `violación de segmento` o "extraños" errores de acceso a la memoria.

Aquí un ejemplo de alguna de las funciones de librería estándar de C `string.h` para manipular cadenas:

```c
#include <string.h>

int strlen(char *s);   // retorna  la longitud de la cadena
                       // no incluye el caracter null

int strcmp(char *s1, char *s2); // retorna 0 si s1 y s2 son la misma cadena
                                // un valor < 0 si s1 es menor que s2
                                // un valor > 0 si s1 es mayor que  s2

char *strchr(const char *s, int c);   // localiza un caracter en una cadena
char *strtok(char *s, const char *delim); // extrae tokens de las cadenas


char *strcpy(char *ds1, char *s1);// copia la cadena s1 a la cadena ds1
							// hasta el '\0' de s1 y retorna un puntero
                             // a la cadena ds1 y agrega '\0' al final de la copia

char *strncpy(char *ds2, char *s1, size_t n); // Agrega la cadena apuntada por s1
										//al final de la cadena apuntada por ds2
                                        // hasta n caracteres

char *strcat(char *ds1, char *s1) // agrega caracteres desde s1 al final de ds1
								//retorna un puntero a ds1 y agrega '\0' al final
char *strncat(char *dst, char *src, int size);

char *strstr(char *s1, char *subs1); //localiza una subcadena dentro de una cadena
							// retorna un puntero al inicio de subs1 en s1
                            // retorna NULL, si subs1 no esta en s1
```

En adición hay algunas funciones en la librería `stdlib.h` para convertir cadenas a otros tipos de datos en C:

```c
#include <stdlib.h>
int atoi(const char *nptr); // convierte una cadena a un entero
double atof(const char *nptr) // "1234" a un entero 1234
```

Podemos usar la documentación de funciones de C, usamos la utilidad `man`:

```c
man nombre_funcion
man strcpy
```