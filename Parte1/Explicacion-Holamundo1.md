# Otra forma de entender el Hola mundo en C

El primer programa del libro de K&R, se llama **hola mundo** Existe una version
alternativa a este de la siguiente manera

```c
// Otra version de Hola mundo
#include<stdio.h>
int main(int argc, char *argv[])
{
		printf("Hola mundo.\n");
}
```

Pero que significa la linea 

```c
main(int argc, char *argv[])
```
Los argumentos  **argc** y **argv** de **main**  se utiliza como una forma de enviar argumentos a un programa, la forma  más conocida posiblemente es utilizar el terminal  y esribir **cat archivo**.  Aquí la palabra **cat** es un programa que toma un archivo y da salida a la salida estándar **stdout**.

El programa recibe el número de argumentos en **argc** y el vector de argumentos en **argv**, en el codigo anterior los  argumento serían dos (El nombre del programa que cuenta como el primer argumento) y el vector argumento contendría **[cat, archivo, null]**, el ultimo argumento cuenta con un puntero *null*.


En los sistemas compatibles con POSIX (y de Windows), existe la posibilidad de utilizar un tercer  parámetro ** envp** que contiene un vector de las  [Variables de Entorno](https://en.wikipedia.org/wiki/Environment_variable).

Además, la denominación de las variables es una convención y no tiene ningún significado real. Siempre es una buena idea  adherirse a esto para que no producir confusión, pero sería igualmente válida  definir **main** como

```c
int main(int c, char **v, char **e) {
   // code
   return 0;
}
```

