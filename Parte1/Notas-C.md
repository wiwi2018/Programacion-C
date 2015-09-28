#Notas de C


##Introducción

- - -

El lenguaje de programación C fue desarrollado en la década de los 70's por Dennis Ritchie en los Laboratorios Bell (Murray Hill, Nueva Jersey) en el proceso de implementación del sistema operativo Unix en un ordenador DEC PDP-11.

C tiene sus orígenes en un lenguaje de programación sin tipo llamado BCPL (Basic Combined Programming Language, desarrollado por M. Richards) y en B (desarrollado por K. Thompson). En 1978, Brian Kernighan y Dennis Ritchie produjeron la primera descripción a disposición del público de C, ahora conocido como el estándar `K & R`.

C es un lenguaje altamente portátil orientado a la arquitectura de las computadoras de hoy en día. El propio lenguaje real es relativamente pequeño y contiene algunos elementos específicos de hardware. Este no incluye declaraciones de entrada/salida o técnicas de gestión de memoria, por ejemplo. Las funciones para abordar estas tareas están disponibles en la extensa biblioteca estándar C.

El diseño de C tiene ventajas muy importantes:

* El código fuente es altamente portable.
* El código máquina es eficiente.
* Los compiladores de C están disponibles en los actuales sistemas.

La descripción de C está basada en el estándar ANSI X3.159. El estándar corresponde al estándar internacional ISO/IEC 9899, el cual fue adoptado por la International Organization  for Standardization en 1990, entonces enmendada en 1995 y 1999. La ISO/IEC 9899 puede ser vista en la página web ANSI http://webstore.ansi.org/.


La norma de 1995 es soportada por  todos los compiladores comunes de C hoy en día. Las nuevas extensiones definidas en el para el estándar  1999 (llamados "ANSI C99" para abreviar) no se aplican aún en muchos compiladores de C.

## Fundamentos

- - -

Un programa en C se compone de bloques  individuales llamados `funciones`, que pueden invocar uno a  otros. Cada función realiza una tarea determinada. Funciones confeccionados para ciertas tareas  están disponibles en la librería estándar; otras funciones son escritos por el programador según sea necesario.

Una función especial es  la que se conoce como `main()`: esta es la primera función que se invoca cuando un programa se inicia. Todas las demás funciones son `subrutinas`.

## Estructura de un Programa en C

- - -

El código siguiente ilustra, la estructura de un Programa en C. El programa consiste de de las funciones `main()`, `mcd()`, `mcm()` y muestra el MCD y MCM de dos números dados. La función ` main()` llama a las funciones  `mcd()` y `mcm()` para calcular el máximo común divisor y mínimo común múltiplo de dos números enteros positivos y entonces llama la función de la librería estándar `printf()` para mostrar el resultado en la consola.


```c
/*
Este programa pide ingresar dos enteros positivos y muestra
el MCD y el MCM de ambos, empleando funciones 
*/

#include <stdio.h>
// prototipos de funciones

int mcd (int a, int b);
int mcm (int a, int b);
int main (void)
{
	int a,b;
	printf("\n a: ");
	scanf("%d", &a);
	printf(" b: ");
	scanf("%d", &b);
	printf(" mcd = %d.\n",mcd(a,b));
	printf(" mcm = %d.\n",mcm(a,b));
	printf("\n");
	return 7;
}

// funcion que retorna el MCD si se ingresan dos enteros positivos

int mcd (int a, int b)
{
	int d = 1, m;
	while (d <= a && d <= b)
	{
		if (a % d == 0 && b % d == 0) m = d;
			d++;
	}
return m;
}

// funcion que retorna el MCM si se ingresan dos enteros positivos

int mcm (int a, int b)
{
	int m = mcd(a,b);
	return (a*b)/m;
}
```

Nota que el compilador necesita una `declaración ` a priori	 para cada función llamada. Los prototipos de `mcd()` y `mcm()` proporcionan la información necesaria para compilar la declaración que llama a las funciones.


Los prototipos de las funciones de la librería estándar son encontrados en los archivos de cabecera estándar. Debido a que el archivo cabecera `stdio.h` contiene el prototipo de la función `printf`, la `directiva de preprocesador #include <stdio.h>` declara la función indirectamente, direccionando el preprocesador del compilador a insertar el contenido de la función.

No hay un orden establecido  para la definición de  las funciones. La función `mcm()` en el código anterior, podría haber sido colocada antes de la función `main ()`. Una observación importante es que ninguna  función  se puede definir dentro de otra función, tu puedes definir una variable local dentro del bloque de una función, pero no una función local.

### Código fuente

Los `declaraciones` que conforman las funciones, las declaraciones globales del programa  y las directivas de preprocesamiento, forman el código fuente de un programa en C. Para programas pequeños, el código fuente está escrito en un solo `archivo fuente`; para programas muchos más grandes en  C, estos  consisten de  varios archivos, que pueden ser editados y compilados por separado. Ver aquí un [ejemplo del uso de make](http://iie.fing.edu.uy/~vagonbar/gcc-make/make.htm).

Debido a que las definiciones de funciones, generalmente dependen de la directiva de preprocesador y declaraciones globales, los archivos de código fuente tienen la siguiente estructura interna:

- Directivas de preprocesador.
- Declaraciones globales.
- Definición de funciones.

El soporte de la programación modular de C,  permite organizar un programa en muchos archivos fuentes y archivos de cabecera como se desee. Cada archivo fuente contiene funciones que son lógicamente relacionadas. Por ejemplo

```c
//mcd.c Imprime el mcd de dos numeros
// usa mcd1.c para el calculo

#include <stdio.h>
int mcd (int a, int b);

int main(void){
.....
// Todo lo que se ha escrito en el ejemplo anterior
.....
}
```

```c
// mcd1.c Calcula el mcd de dos numeros
// llamada por main() en mcd.c

int mcd (int a, int b)
{
// Todo lo que se ha escrito en el ejemplo anterior
}
```


Cuando un programa consiste de varios archivos fuentes, tu necesitas declarar las mismas funciones, las variables globales y declarar las mismas macros y constantes en muchos de los archivos. Esas  declaraciones y definiciones se coloca en un tipo de `archivo de cabecera`, que es más o menos constante en el programa. Por simplicidad y consistencia esta información pueden ser escritas en un `archivo cabecera` y entonces referenciar el `archivo cabecera` usando  la directiva `#include` en cada archivo fuente. Los archivos de cabecera tienen nombres que terminan en `.h` y todo archivo fuente de C, termina con una extensión `.c`.

Cada  archivo fuente junto con los archivos de cabecera incluidos en el mismo se denomina una `unidad de traslación (translation unit)`. El compilador procesa cada archivo fuente en secuencia y  descompone su contenido en `identificadores (tokens)`, unidades semanticas pequeñas como los nombres de las  funciones y operadores. Un número de caracteres de espacios en blanco entre sucesivos  tokens son permitidos, dando libertad en el formato de tu código fuente. No  hay reglas para saltos de línea o indentación y se pueden usar  espacios en blanco, espacio de tabulador, o caracteres de nueva línea.

Una prueba de esto es el ejemplo dado en el libro **Pointer on C**  de Kenneth Reek.

```
#include <stdio.h>
main(t,_,a)
char *a;
{return!0<t?t<3?main(-79,-13,a+main(-87,1-_,
main(-86, 0, a+1 )+a)):1,t<_?main(t+1, _, a ):3,main ( -94, -27+t, a
)&&t == 2 ?_<13 ?main ( 2, _+1, "%s %d %d\n" ):9:16:t<0?t<-72?main(_,
t,"@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+\
,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/\
+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# ){n\
l]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#\
n'wk nw' iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c \
;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;\
#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/")
:t<-50?_==*a ?putchar(a[31]):main(-65,_,a+1):main((*a == '/')+t,_,a\
+1 ):0<t?main ( 2, 2 , "%s"):*a=='/'||main(0,main(-61,*a, "!ek;dc \
i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry"),a+1);} 
```


`Las directivas de preprocesamiento` son una excepción a esta regla. Estas directivas estan diseñadas para ser ejecutadas por el preprocesador antes que  se compile el programa  y cada una de ellas  ocupa una línea , comenzando con una almohadilla `#`.



### Comentarios

Los `comentarios` son  cadenas cerradas usadas para documentar código fuente. Hay dos maneras de insertar comentarios en C: `bloque de comentarios`  que inician con  `/*` y terminan con ` */ `   y `linea de comentarios`  que empiezan con `//` y finalizan con un salto de  línea. Agunos ejemplos:

```c
const double pi = 3.1415926536;		// Pi es constante
```

```c
/*
   Este es un bloque de comentarios
  .......

*/
int open( const char *name, int mode, ... /* int permisos*/ )
```

Si queremos comentar parte de un programa que contiene bloques de comentarios, podemos utilizar un condicional de la directiva de preprocesador.

```c
#if 0
const double pi = 3.1415926536;  /*PI es constante*/
area = pi * r * r 				/* Calculo del area*/
#endif
```

En las fases preliminares de traslación del código fuente, antes de generar cualquier código objeto, cada comentario se sustituye por `un espacio`, entonces se ejecutan las directivas de preprocesamiento.

## Conjunto de Caracteres

C hace una distinción entre el entorno en el cual el compilador traslada el código fuente de un programa `(translation environment)` y el entorno en el cual el código es ejecutado `(execution environment)`.  De acuerdo a esto C define dos conjuntos de caracteres: el `conjunto de caracteres fuente(source  character set)` que es el conjunto de caracteres que se pueden utilizar en un archivo fuente y  el `conjunto de caracteres de ejecución (execution character set)`, que consta de todos los caracteres que se interpretan durante la ejecución del programa, como los caracteres  de una cadena constante.

En muchas implementaciones de C, los dos conjuntos de caracteres son idénticos. Si ellos no lo son, entonces el compilador convierte los caracteres en caracteres constantes y cadenas literales en el archivo fuente en elementos correspondientes del  conjunto de caracteres de ejecución.

Cada uno de estos conjuntos de caracteres incluye  un `conjunto de caracteres básico (basic character set)` y `caracteres extendidos(extended character)`. Los caracteres extendidos junto con el conjunto de caracteres básicos  forma el  `conjunto de caracteres extendido (extended  character set)`.

Los conjuntos de caracteres  básico y de ejecución, contienen los siguientes tipos de caracteres


- Las 52 letras mayúsculas y minúsculas del alfabeto latino:
```
	 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

	a b c d e f g h i j k l m n o p q r s t u v w x y z
```
- Los 10 dígitos decimales
```
		0 1 2 3 4 5 6 7 8 9
```
- Los siguientes 29 caracteres:
```
	! " # % & ' ( ) * + , – . / : ;

	< = > ? [ \ ] ^ _ { | } ~
```
- Los  caracteres de espacios en blanco: espacio,tabulador horizontal, tabulador vertical, nueva linea, form feed..

En adición,  los caracteres de execución  pueden contener los siguiente
- El caracter `null`, que funciona como una señal que indica donde termina una cadena de caracteres.
- Los caracteres de control, representados por `secuencias de escape`, como se muestra a continuación

```
  1.  \a : Alerta(beep).
  2. \b : Retroceso.
  3.  \f: retroalimentación.
  4. \n: nueva línea.
  5.  \r : retorno de carro.
  6.  \' : El caracter '.
  7.  \" : El caracter "".
  8.  \? : El caracter ?.
  9. \\:  El caracter \.
  10.  \o \oo \ooo (o =digito octal): El caracter con este digito octal.
  11. \t: Tabulador horizontal.
  12.  \v: Tabulador Vertical.
  13.  \xh..(h.. cadena de digitos hexadecimales): El caracter con este código hexadecimal.
```

Los valores numéricos de caracteres actuales, pueden variar de una implementación C en otra. El lenguaje impone las siguientes condiciones:

- Cada caracter en el conjunto de caracteres básicos debe ser representable en un byte.
- El caracter `null` es un byte, en el cual todos los bits son `0`.
- EL valor de cada dígito decimal después de `0` es mayor por uno, que los dígitos anteriores.

Cualquier otro carácter, dependiendo del compilador dado, se pueden utilizar en los comentarios, cadenas, y las constantes de caracteres. Estos pueden incluir el signo dólar o diacríticos. Sin embargo, el uso de tales caracteres puede afectar a la portabilidad.

### Caracter wchar_t

El ANSI 99 proporciona el tipo
 ```c 
 wchart_t(wide character type)
 ```
Este tipo, definido en el archivo cabecera `stddef.h`, es lo suficientemente grande como para representar cualquier carácter del conjunto de caracteres extendidos. La  codificación de caracteres `Unicode`  extiende el código ASCII estándar para representar unos 35.000 caracteres de 24 países, cuando esta codificación  es implementada el tipo  `wchar_t` tiene un ancho de 16 o 32 bits y el valor del tipo de
`wchar_t` representa un caracter unicode. Por ejemplo, el siguiente código inicializa la variable `wc` con la letra griega alfa.

```c
wchar_t wc = '\x3b1';
```

Para mejor soporte Unicode, C11 introduce dos tipos más de caracteres `char16_t` y `char32_t`, los cuales son definidos de tipo entero unsigned en el archivo cabecera `uchar.h`.

### Caracteres Multibytes

En el conjunto  de caracteres multibytes, cada carácter se codifica como una secuencia de uno o más bytes. Tanto los conjuntos de caracteres fuente  y de ejecución pueden contener caracteres de multibytes. Si lo hacen, entonces cada caracter en el conjunto de caracteres básico sólo ocupa un byte, y ningún carácter multibyte excepto el carácter nulo puede contener algún byte en el que todos los bits son 0. Los  caracteres multibytes pueden ser usados en caracteres constantes, cadenas literales, identificadores, comentarios y nombre de archivos cabecera.

Los caracteres multibyte están representados por un número de bytes variable. Esta representación hace que las cadenas multibytes sean más complicadas de procesar que las cadenas de caracteres `wchar_t`. Por ejemplo, a pesar de que el carácter A se puede representar con un solo byte, encontrarlo en una cadena multibyte requiere más que una simple comparación byte a byte, debido a que el mismo valor del byte en ciertas localizaciones podría ser parte de un carácter diferente. Los caracteres multibyte están bien adaptados para guardar texto en los archivos, sin embargo. 
La codificación de caracteres de multibyte es independiente de la arquitectura del sistema, mientras que la codificación para `wchar_t` depende del orden de bytes del sistema.

### Conversión

C proporciona funciones estándar para obtener el valor `wchar_t` de cualquier carácter multibyte y viceversa. Por ejemplo, si el compilador C utiliza los estándar Unicode UTF-16  y UTF-8, la siguiente llamada a la función `wctomb()`  obtiene la  representación multibyte del  caracter griego alfa:

``` c
wchar_t wc = L'\x3B1'; //letra griega 
char mbStr[10] = "";
int nBytes = 0;
nBytes = wctomb( mbStr, wc );
if(0 > nBytes)
puts("No es un caracter multibyte valido en tu localizacion.");
```

El  array `mbStr` contiene el caracter multibyte  que en este ejemplo es la secuencia `"\XCE\xB1"`. La función `wctomb()`  retorna el valor asignado a la variable `nBytes`, es decir el número de bytes (2) necesarios para representar el caracter multibyte.
La biblioteca estándar también proporciona funciones de conversión para `char16_t` y `char32_t`, además de funciones como `c16rtomb()`, que devuelven el carácter multibyte que corresponde a un caracter del tipo `char16_t`.


### Digrafos y trigrafos

C proporciona representaciones alternativas para un número de símbolos de puntuacion que no están disponibles en todos los teclados. Seis de ellos son los digráficos.

```
Digrafo  Equivalente
  <:          [
  :>          ]
  <%          {
  %>          }
  %:          #
  %:%:        ##
```

Estas secuencias no se interpretan como dígrafos si ocurren dentro constantes de caracteres o cadenas literales. En el resto de posiciones, se comportan exactamente como el caracter que representan.

```c
// Con diagrafos

int arr<::> = <% 10, 20, 30 %>;
printf( "El segundo elemento del array es <%d>.\n", arr<:1:> );

// Sin digrafos:

int arr[] = { 10, 20, 30 };
printf( "EL segundo elemento del array es <%d>.\n", arr[1] );

//Salida:
El segundo elemento del arrays es: 20
```



C99 también introduce `secuencias trigráficas`. Esas secuencias pueden ser utilizadas para ingresar caracteres gráficos que no son disponibles en todos los teclados. 

```
Trigrafos     ??=    ??(    ??/   ??)   ??' ??<  ??! ??> ??-
Significado     #     [       \     ]    ^    {    |   }   ~
```
Trigrafos permiten escribir cualquier programa C utilizando  los caracteres definidos en la norma `ISO/IEC 646`, la norma de 1991 que corresponde a `ASCII de 7 bits`. El preprocesador del compilador reemplaza los trigrafos con sus equivalentes de un solo carácter en la primera fase de compilación. Esto significa que los trigrafos, a diferencia de los dígrafos,  traducen a sus equivalentes de un solo carácter, sin importar dónde ocurren, incluso en las constantes de caracteres, cadenas literales, comentarios y directivas de preprocesamiento.

```c
printf("Cancelar???(y/n) ");

// Salida
printf("Cancelar?[y/n) ");

// Salida sin interpretacion de trigrafo.
printf("Cancelar\?\?\?(y/n) ");
```

### Identificadores

El término identificador se refiere  a nombres de variables, funciones, macros, estructuras y otros objetos definidos en un programa en C. Los identificadores tienen cierto tipos de reglas de formación:

- Un identificador consiste de una secuencia de letras (A-Z, a-z), digitos (0-9) y el  símbolo `(_)`.
- El primer caracter de un identificador no debe ser un dígito.
- Los identificadores, reconocer los nombres con mayúsculas y minúsculas (case-sensitive).
- No hay restricción en la longitud de un identificador. Sin embargo, sólo los `31`caracteres tienen significado.


Las palabras reservadas(`Keywords`) son reservados y no deben ser usados como identificadores. Presentamos una lista de palabras reservadas en C.

```
auto    extern    short      while
break    float    signed    _Alignas
case     for      sizeof    _Alignof
char     goto     static    _Atomic
const    if       struct    _Bool
continue inline   switch    _Complex
default  int      typedef   _Generic
do      long      union    _Imaginary
double  register  unsigned   _Noreturn
else    restrict  void        enum 
return  _Static  _assert volatile  _Thread_local
```

Al elegir identificadores en tus programas,  muchos identificadores ya son usados por la biblioteca estándar de C. Estos incluyen los nombres de funciones de la biblioteca estándar, que no se puede utilizar para nombrar  las funciones que definamos o para las variables globales.

El compilador de C, proporciona un identificador predefinido `__func__`que puedes usar para acceder a una cadena constante conteniendo el nombre de la función. Por ejemplo:

```c
// Ejemplo: C in a Nutshell Prinz- Crawford

#include <stdio.h>
int test_func( char *s )
{
	if( s == NULL) {
	fprintf( stderr, "%s: argumento de puntero nulo recibido \n", __func__ );
		return -1;
	}
	/* ... */
}
```

En este ejemplo, estamos pasando un puntero nulo a la función `test_func`, generando el mensaje de error:


```
test_func: argumento de puntero nulo recibido
```

## Espacios de nombres

Cada identificador pertenece a exactamente a una de las siguientes categorias, que constituyen los `espacios de nombres`.

- `Label names (Etiqueta de nombres)`.
-  `Etiqueta (tags)` de estructuras, uniones y enumeraciones. Estos son identificadores que siguen a una de las palabras claves `struct, union` o `enum`.
-  Nombres de estructuras o miembros de uniones. Cada tipo de estructura o union tiene un espacio de nombres separados para sus miembros.
-  Todos los otros identificadores, llamados `identificadores ordinarios`.

Identificadores que pertenecen a diferentes espacios de nombres pueden ser el mismo sin causar conflictos. En otras palabras, se puede utilizar el mismo nombre
para referirse a diferentes objetos, si son de diferentes tipos. Por ejemplo,
el compilador es capaz de distinguir entre una variable y un label con el mismo nombre. Veamos un ejemplo donde el mismo nombre a una estructura, un elemento en la estructura y una variable

```c
struct pin { char pin[16]; /* ... */ };
_Bool check_pin( struct pin *pin )
{
	int len = strlen( pin->pin );
	/* ... */
}
```

## Ámbito de identificadores

El ámbito de un identificador se refiere a esa parte de la `unidad de traslación` en
que el identificador es válido . O para decirlo de otra manera, el ámbito de un identificador es esa parte del programa que puede `"ver"` al identificador.

El tipo de ámbito o alcance siempre está determinado por la ubicación en la que
se declara el identificador  (a excepción de  `label`, que siempre tiene ámbito de función). Cuatro tipos de ámbitos son posibles:

- Ámbito de Archivo: Si se declara un identificador fuera de todos los bloques y las listas de parámetros, entonces tiene  ámbito de archivo. El ámbito archivo empieza con la declaración del  identificador hasta el final del código fuente.

- Ámbito de bloque: A excepción de `labels (nombres seguidos por un punto y coma)`, los identificadores declarados dentro de un bloque tienen alcance bloque. Puedes utilizar un identificador  desde su declaración hasta el final del bloque más pequeño que contiene esa declaración que es a menudo, pero no necesariamente, el cuerpo de una función. En C99, declaraciones no tienen que ser colocados
antes de todas las declaraciones en un bloque de función. Los nombres de los parámetros en una función también tienen ámbito de bloque, y son válidos dentro del bloque de la  función correspondiente.

- Ámbito de  prototipo de función: Los nombres de los parámetros de un prototipo de función tienen alcance prototipo  función. Debido a que estos nombres de parámetros no son válidos fuera del propio prototipo, ellos son solo una poco más que comentarios.

- Ámbito de función: Solo los `label names` tiene ámbito de función. Su uso es limitado al bloque de la función donde el label es definido. Los `label names` deben ser únicos dentro de la funció.