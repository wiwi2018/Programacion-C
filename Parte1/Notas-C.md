#Notas de C


##Introdución

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

