# Punteros

## Memorias y Direcciones

La memoria de las computadoras están compuestas de millones de `bits`, cada uno capaz de tener el valor de 0 o de 1 agrupados como una unidad para  almacenar un rango mayor de valores.

![Localizaciones de Memoria](g1.png "Localizaciones de Memoria")

Cada localización es llamado un `byte` y cada uno contiene los `bits`  necesarios para almacenar un caracter.  Por ejemplo cada `byte` contiene 8 `bits`, que pueden almacenar enteros desde el 0 al 255 o enteros con signos `unsigned` desde -128 a 127.
Cada `byte` es identificado por una ` dirección`, que representan los números encima de las cajas. Aquí veremos dos interesantes propiedades:

- Cada localización en memoria es identificado por una única dirección.
- Cada localización en memoria contiene un valor.


## Dirección y Contenido

EL siguiente gráfico muestra 5 valores enteros, cada uno ocupando una cantidad de `bytes`. Si recuerdas las direcciones donde se almacena algun valor, puedes usar esas direcciones para recuperar su valor.

![Contenido en memoria](g2.png "Contenido en memoria")

Los lenguajes de programación de alto nivel proporcionan la habilidad de referirse  la localización de memoria por nombres que por direcciones y esos nombres son llamados `variables`.

![Variables](g3.png "Variables")

## Valores y sus tipos

Veamos las declaraciones de esas para esas variables

```c
int a = 112, b = -1;
float c = 3.14;
int *d = &a;
float *e = &c;
```

Si `c` es un entero, por que aparece como `float`?.

Este hecho conduce a una conclusión importante: `el tipo de un valor no puede ser determinado simplemente examinando bits`. Veamos ese número en binario

```c
01100111011011000110111101100010
```

este valor puede ser interpretado con distinto formato y interpretaciones pueden manejar estos `bits` de distinta forma. Es por ello declarar `c` como `float` causa que el compilador genere instrucciones de punto flotante.


## Contenido de una variable Puntero

Las variables `d` y `e` fueron declaradas como punteros y son inicialiazadas con la dirección de otra variable. La inicialización es hecha con el operador `&`, que produce la `dirección de memoria` de su operando.

![Direcciones](g4.png "Direcciones")

Veamos las expresiones involucrando estas variables

```c
int a = 112, b = -1;
float c = 3.14;
int *d = &a;
float *e = &c;
```

El valor de  `a` es 112, el valor de `b` es -1 y el valor de `c` es 3.14. El valor de `d` es 100  y el valor de `e` es 108. El hecho de que `d` y `e` son declarados como punteros no cambia  como esas expresiones son evaluadas; el valor de una variable es el número almacenado en la localización de memoria asignada a la variable incluso para las variables punteros.


## Operador indirección

El proceso de seguir un puntero a la ubicación a la que apunta es llamado `indirección` o `dereferenciando el puntero`. La operación que lleva a cabo la `indirección` es `*`.

```
Expresión			R-Valor 			Tipo
   a				   112				int
   b				   -1				int
   c				   3.14				float
   d				   100				int *
   e				   108				float *
   *d				   112				int
   *e				   3.14				float
```

El valor de `d`  es 100. Cuando aplicamos el operador indirección a `d` significa ir a la localización 100 en memoria y buscar allí. Así el R-valor de `*d` es 112, el contenido en la localización 100. El L-Valor es la localización 100. 

Algunas observaciones:

- No se sabe la localización que el compilador escoge para cada variable, así no podemos predecir su dirección por adelantado una menera de corregir esto en  términos gráficos es

![Notacion](g5.png "Notacion")

- El valor de una variable de puntero es simplemente una colección de bits  hasta que una indirección se lleva a cabo . Cuando se realiza indirección una flecha sólida es utilizada para mostrar lo que realmente ocurrió. Tenga en cuenta que la flecha se origina en el interior de la caja, ya que representan  el valor almacenado en esa variable. También, las flechas apuntan a una localización, no al valor de la localización. Esta notación implica que siguiendo la flecha con indirección produce un L-Valor.


## Puntero no inicializado y ilegal

Un error

```c
int *a;
...
*a = 12;
```

donde declaramos una  variable pero no hay una  manera de predecir dónde se almacena el valor 12. Una variable puntero no es diferente de cualquier otra variable en este aspecto. Si la variable es estática, se inicializa a cero; pero si la variable es automática, no se inicializa en absoluto. En ninguno de los casos declarando un puntero a un entero `crea`  memoria para el almacenamiento de un número entero.

Cuando la asignación es llevada a cabo y si  tienes suerte, el valor inicial  será una dirección ilegal y la asignación provocará un fallo que termina el programa. En los	 sistema UNIX, este error  es llamado `segmentation violation` o `memory fault` y indica que estas accediendo a una localización fuera de la memoria asignada a tu programa por ejemplo.


## Puntero a void


## Punteros a punteros

Consideremos las siguientes declaraciones:

```c
int a = 12;
int *b = &a;
```

que permiten asignar memoria como se muestra en la siguiente figura

![Asignacion de memoria](g6.png "Asignación de  memoria")


Supongamos que una tercera variable llamada `c` es inicializada con esta declaración

```c
c = &b;
```

Aquí la memoria deberia verse como:

![Doble indirección](g7.png "Doble indirección")

La variable `b` es un puntero a un entero, así que cualquier cosa que apunta a `b` debe ser un puntero a un 'puntero a un entero' o de manera más general, un puntero a un puntero.

La declaración

```c
int **c = &b;
```

dice que `c**` es del tipo entero.  La siguiente tabla lista algunas expresiones que ayuda a ilustrar estos conceptos; las expresiones asume esas declaraciones

```c
int a = 12;
int *b = &a;
int **c = &b;
```


```
Expresión			Expresiones equivalentes
	a					  12
    b					  &a
    *b 					a, 12
    c					  &b
    *c					  b, &a
    **c					*b, a, 12
```


Una nueva expresión aparece en esta tabla (la última) así que vamos a explicar que es. El operador `*` tiene una asociatividad de derecha a izquierda , por lo que esta expresión es equivalente a `*(*c)`. Debemos evaluarlo desde adentro hacia afuera.

`* c` tomamos la ubicación que   `c` apunta,  que sabemos que es la variable `b`. La segunda indirección nos lleva a donde esta ubicación apunta, el cual es `a`.

