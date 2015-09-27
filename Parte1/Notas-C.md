#Notas de C


##Introducción

- - -

El lenguaje de programación C fue desarrollado en la década de los 70's por Dennis Ritchie en los Laboratorios Bell (Murray Hill, Nueva Jersey) en el proceso de implementación del sistema operativo Unix en un ordenador DEC PDP-11.

C tiene sus orígenes en un lenguaje de programación sin tipo llamado BCPL (Basic Combined Programming Language, desarrollado por M. Richards) y en B (desarrollado por K. Thompson). En 1978, Brian Kernighan y Dennis Ritchie produjeron la primera descripción a disposición del público de C, ahora conocido como el estándar **K & R**.

C es un lenguaje altamente portátil orientado a la arquitectura de las computadoras de hoy en día. El propio lenguaje real es relativamente pequeño y contiene algunos elementos específicos de hardware. Este no incluye declaraciones de entrada/salida o técnicas de gestión de memoria, por ejemplo. Las funciones para abordar estas tareas están disponibles en la extensa biblioteca estándar C.

El diseño de C tiene ventajas muy importantes:

* El código fuente es altamente portable.
* El código máquina es eficiente.
* Los compiladores de C están disponibles en los actuales sistemas.

La descripción de C está basada en el estándar ANSI X3.159. El estándar corresponde al estándar internacional ISO/IEC 9899, el cual fue adoptado por la International Organization  for Standardization en 1990, entonces enmendada en 1995 y 1999. La ISO/IEC 9899 puede ser vista en la página web ANSI http://webstore.ansi.org/.


La norma de 1995 es soportada por  todos los compiladores comunes de C hoy en día. Las nuevas extensiones definidas en el para el estándar  1999 (llamados "ANSI C99" para abreviar) no se aplican aún en muchos compiladores de C.

## Fundamentos

- - -

Un programa en C se compone de bloques  individuales llamados **funciones**, que pueden invocar uno a  otros. Cada función realiza una tarea determinada. Funciones confeccionados para ciertas tareas  están disponibles en la librería estándar; otras funciones son escritos por el programador según sea necesario.

Una función especial es  la que se conoce como **main()**: esta es la primera función que se invoca cuando un programa se inicia. Todas las demás funciones son **subrutinas**.

## Estructura de un Programa en C

- - -

El código siguiente ilustra, la estructura de un Programa en C. El programa consiste de de las funciones **main()**, **mcd()**, **mcm()** y muestra el MCD y MCM de dos números dados.


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

Los **declaraciones(statements)** que conforman las funciones, las declaraciones necesarias del programa  y las directivas de preprocesamiento, forman el código fuente de un programa en C. Para programas pequeños, el código fuente está escrito en un solo **archivo fuente**; para programas muchos más grandes en  C, estos  consisten de  varios archivos, que pueden ser editados y compilados por separado. Ver aquí un [ejemplo del uso de make](http://iie.fing.edu.uy/~vagonbar/gcc-make/make.htm).

Cada uno de tales archivo de código fuente contiene funciones que pertenecen a una unidad lógica, como las funciones para la salida a un terminal, la información que se necesita en varios archivos fuentes, tales como **declaraciones**, se coloca en  **archivos de cabecera**, estas declaraciones pueden ser incluidas en cada archivo fuente a través de la directiva **#include**. 
Los archivos fuente del lenguaje C, tienen nombres que terminan en **.c**; los archivos de cabecera tienen nombres que terminan en **.h**. Un archivo fuente junto con los archivos de cabecera incluidos en el mismo se denomina una unidad de traducción **(translation unit)**.

No hay un orden definido para la definición de  las funciones. La función **mcm()** en el código anterior,  también podría haber sido colocado antes de la función **main ()**. Una observación importante es que ninguna  función  se puede definir dentro de otra función.
El compilador procesa cada archivo fuente en secuencia y  descompone su contenido en **identificadores (tokens)**, como los nombres de las  funciones y operadores. Los tokens pueden ser separados por uno o más espacios en blanco, como el espacio, el  tabulador, o caracteres de nueva línea. Así, sólo el orden de los identificadores en en el archivo importa, debido al  diseño del código fuente, el salto de línea y identación, por ejemplo, no es importante. 

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


**Las directivas de preprocesamiento** son una excepción a esta regla. Estas directivas estan diseñadas para ser ejecutadas por el preprocesador antes que  se compile el programa  y cada una de ellas  ocupa una línea , comenzando con una almohadilla **#**.

Los **comentarios** son  cadenas cerradas ya sea entre  **/*** y ** */ **,  o entre // y el final de la línea. En las fases preliminares de traslación del código fuente, antes de generar cualquier código objeto, cada comentario se sustituye por *un espacio*, entonces se ejecutan las directivas de preprocesamiento.

## Conjunto de Caracteres

ANSI C define dos conjuntos de caracteres. El primero es el **conjunto de caracteres fuente(source  character set)** que es el conjunto de caracteres que se pueden utilizar en un archivo fuente. El segundo es el **conjunto de caracteres de ejecución (execution character set)**, que consta de todos los caracteres que se interpretan durante la ejecución del programa, como los caracteres  de una cadena constante.

Cada uno de estos conjuntos de caracteres contiene un **conjunto de caracteres básico**, que incluye lo siguiente:
- Las 52 letras mayúsculas y minúsculas del alfabeto latino:

	 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 
	a b c d e f g h i j k l m n o p q r s t u v w x y z

- Los 10 dígitos decimales

		0 1 2 3 4 5 6 7 8 9

- Los siguientes 29 caracteres:

	! " # % & ' ( ) * + , – . / : ;

	< = > ? [ \ ] ^ _ { | } ~

- Los  caracteres de espacios en blanco: espacio,tabulador horizontal, tabulador vertical, nueva linea.

En adición,  los caracteres de execución  pueden contener los siguiente
- El caracter **null \0**, donde termina una cadena de caracteres.
- Los caracteres de control, representados por **secuencias de escape**, como se muestra a continuación

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
Cualquier otro carácter, dependiendo del compilador dado, se pueden utilizar en los comentarios, cadenas, y las constantes de caracteres. Estos pueden incluir el signo dólar o diacríticos, por ejemplo. Sin embargo, el uso de tales caracteres puede afectar a la portabilidad. 
El conjunto de todos los caracteres utilizables se llama **conjunto de caracteres extendido (extended  character set)**, que  es un superconjunto del conjunto de carácteres básico.

El ANSI 99 proporciona el entero tipo 
 ```c wchart_t(wide character type)```

que es lo suficientemente grande como para representar cualquier carácter del conjunto de caracteres extendidos. La codificación de caracteres **Unicode** se utiliza a menudo, que  extiende el código ASCII estándar para representar unos 35.000 caracteres de 24 países.

C99 también introduce `secuencias trigráficas`. Esas secuencias pueden ser utilizadas para ingresar caracteres gráficos que no son disponibles en todos los teclados. 

```
Trigrafos     ??=    ??(    ??/   ??)   ??' ??<  ??! ??> ??-
Significado     #     [       \     ]    ^    {    |   }   ~
```