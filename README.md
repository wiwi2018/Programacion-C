# Programacion en C


## Libros

 - C in a Nutshell, 2nd Edition, Peter Prinz, Tony Crawford, O'Reilly Media, 2015.
 - Grokking Algorithms An illustrated guide for programmers and other curious people, Aditya Y. Bhargava, Manning publishing.

## Lista de temas 

1. Como compilar y correr programas.
 - Escribiendo un programa.
 - Compilando y ejecutando un programa en C.

2. El entorno de programación en Linux
 - El shell.
 - Sistema de archivos.
 - Programas de Linea de comandos.
 - Parando o interrupiendo programas.
 - Corriendo tus programas.
 - Redirigiendo entradas y salidas. 

3. Conociendo algunos editores
 - Usando EL EDITOR [nano](https://www.nanotutoriales.com/tutorial-del-editor-de-texto-nano).
 - Usando [gedit](https://help.gnome.org/users/gedit/stable/).
 - Otros editores: [sublime Text](http://www.sublimetext.com/), [vim](http://www.sromero.org/wiki/linux/aplicaciones/manual_vim), etc.

4. Herramientas de Compilación 
 - El compilador de GNU, [gcc](https://gcc.gnu.org/).
 - [Make](https://www.gnu.org/software/make/).

5. Herramientas de depuración

 - Depuración en general.
 - El depurador GNU  gdb.
 - Estrategias de depuración.
 - Aplicaciones de gdb.
 - [Valgrind](http://valgrind.org/).

6. Optimización del rendimiento.
 
7. Introducción a las versiones de control

 - Introducción Git y Github.
 - Otras versiones de control

8. El Lenguaje de Programación C.

 - Estructura de un programa en C
 - Tipos de datos númericos.
 - `size_t` y `ptrdiff_t`
 - Tipos de dato punto flotante.
 - Precedencia de operadores.
 - Estilo de Programación.
 - Variables.
 - Entradas y Salidas.
 - Declaraciones y Estructuras de Control.
 - Funciones.
 - Punteros.
 - Cadenas.
 - Tipos de datos estructurados: `struct`, `unions`, `Enums`
 - Uso de `typedef`.
 - Macros.

## Lista de Libros de C online 

- [Versión preliminar del libro de C de Jens Gustedt: Modern C](http://icube-icps.unistra.fr/img_auth.php/d/db/ModernC.pdf).
- [Libro online de C de Zed A. Shaw](http://c.learncodethehardway.org/book/).
- [Lecturas del curso Effective Programming in C and Unix de Carnegie Mellon ](https://www.cs.cmu.edu/~guna/15-123S11/).


## Algunos artículos importantes
- [Notas sobre C](http://www.cs.yale.edu/homes/aspnes/classes/223/notes.html)
- [Algunas notas de Make](http://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html).
- [Una introducción a los punteros](http://www.codeproject.com/Articles/627/A-Beginner-s-Guide-to-Pointers).
- [Articulo sobre punteros](http://bitflop.com/tutorials/pointers-in-c.html).
- [Linux y otros lenguajes](http://www.cs.swarthmore.edu/~newhall/unixlinks.html#lang).
- [Tutorial de Valgrind](http://pages.cs.wisc.edu/~bart/537/valgrind.html).
- [Ejemplos del uso de Make](http://mrbook.org/blog/tutorials/make/).
- [Pasos que recorre un  programa en C, hasta que llega a ser un ejecutable en Linux](http://www.thegeekstuff.com/2011/10/c-program-to-an-executable/).
- [Compiladores](https://msdn.microsoft.com/en-us/magazine/dn904673.aspx).
- [Inteprete vs compilador](http://techwelkin.com/compiler-vs-interpreter).
- [Linker](http://www.lurklurk.org/linkers/linkers.html).
- [Punteros en C y C++](http://www.augustcouncil.com/~tgibson/tutorial/ptr.html).
- [GDB](http://www.thegeekstuff.com/2014/03/few-gdb-commands/).
- [Como evitar la fuga de memoria (Memory Leak)](https://mousomer.wordpress.com/2010/11/03/simple-rules-to-avoid-memory-leaks-in-c/).
- [Depuracion en c/c++](http://www.cs.yale.edu/homes/aspnes/pinewiki/C%282f%29Debugging.html).
- [El arte perdido del empaquetado en C](http://www.catb.org/esr/structure-packing/).

## Herramientas 

### Editor Vim

[vim](http://www.vim.org/), un editor de texto que dispone de diferentes modos entre los que se alternan ciertas operaciones, comunes entre los programadores. No obstante, debido a su eficiencia, a su variedad de añadidos ("plugins")", y a sus posibilidades de personalización vim es uno de los editores de texto más populares para programadores y usuarios de sistemas tipo Unix (junto con Emacs*).

Existe un tutorial, que se puede utilizar dentro de Linux (Ubuntu 14.04), escribiendo en el terminal.

```bash
c-lara@Lara:~$ vimtutor
```

Otras fuentes de referencia son:

1 . [Vim en archlinux](https://wiki.archlinux.org/index.php/Vim_%28Espa%C3%B1ol%29).

2 . [Tutorial de Vim](http://www.sromero.org/wiki/linux/aplicaciones/manual_vim).

3 . [Learn Vim Progressively](http://yannesposito.com/Scratch/en/blog/Learn-Vim-Progressively/).


### Git y Github

[Git](https://git-scm.com/) es un sistema de control de versiones de gran potencia y versatilidad en el manejo de un gran número de archivos de  código fuente a a través del desarrollo no lineal, es decir vía la gestión rápida de ramas y mezclado de diferentes versiones.

Para poder revisar y aprender los comandos necesarios de Git, puedes darle una ojeada al excelente [tutorial de CodeSchool](https://try.github.io/levels/1/challenges/1) o a la [guía](http://rogerdudler.github.io/git-guide/index.es.html) de Roger Dudle para aprender  Git.

[Github](https://github.com/) es una plataforma de desarrollo colaborativo de software utilizado para alojar proyectos (muchos proyectos importantes como paquetes de R, Django, el Kernel de Linux, se encuentran alojados ahí) utilizando Git y el framework Ruby on Rails.

Podemos instalar Git en Ubuntu utilizando el administrador de paquetes `Apt`:

```bash
c-lara@Lara:~$sudo apt-get update
c-lara@Lara:~$sudo apt-get install git
```


### El paquete de Minted

[Minted](https://www.ctan.org/pkg/minted) es un paquete que permite formatear y resaltar código fuente en LaTeX. Para ejecutar 
este paquete en Latex, se realiza de la siguiente manera

* Supongamos que tenemos un archivo `Solucion-dir_1.tex`, para producir el archivo `Solucion-dir_1.pdf` se realiza en consola lo siguiente

```bash
c-lara@Lara:~$pdflatex -shell-escape Solucion-dir_1
```
Mayor información de Minted en el artículo [Code Highlighting with minted](https://www.sharelatex.com/learn/Code_Highlighting_with_minted).

