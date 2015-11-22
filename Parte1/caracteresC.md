# Caracteres en C

## char

En C, los valores char son almacenados en 1 byte y son codificados como números usando el código ASCII.

La página de `man` para `ascii` lista todas estas codificaciones:

```bash
man ascii
```

Los caracteres desde `'A'` a la `Z`, `a` a la `z` y `0` hasta `9` son contiguos y mediante la combinación de estos caracteres se pueden escribir, las siguientes expresiones:

```c
char ch;
'a' + 2 // 'a' es codificado como número y sumado a 2 para dar 'c'
'C' < 'D'
for(ch = 'a'; ch < 'z'; ch++){...
ch = getchar()
printf("ch es %c\n", ch);
```

## Funciones de C para caracteres

La librería estándar de C tiene funciones para manipular y probar valores de caracteres:

```c
#include <ctype.h>

int islower(ch);
int isupper(ch);       // estas funciones retorna un valor distinto de cero si
int isalpha(ch);       // el test es TRUE, sino retorna 0 (FALSE)
int isdigit(ch);
int isalnum(ch);
int ispunct(ch);
int isspace(ch);
char tolower(ch);
char toupper(ch);

```

Ejemplos:

```c
char c = toupper('a'); // retorna 'A'
        islower('Z');   // retorna 0(FALSE)
        isspace(ch)   // retorna TRUE si ch es un caracter como ' ', '\t', '\n', '\r', 'f' o '\v'
```


Para conseguir mayor información acerca de las funciones, usamos la utilidad de Linux

```bash
man <nombre_funcion>
man isspace
```