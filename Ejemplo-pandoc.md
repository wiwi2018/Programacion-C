% Características de Pandoc en el uso de Markdown

% Basado en las notas de Kurt Pfeifle

% Setiembre del 2015

# Básicos

Esta es una nota básica de  la  utilización  de [Pandoc][2] cuando se usa en  códigos de   [Markdown][1] 

* Pandoc, por defecto, pasa fragmentos de código  \LaTeX\  que se identifica dentro del código Markdown, para ser mostrados en  el documento destino, como es un documento \LaTeX\ , esto incluye archivos  Beamer o salidas en PDF.
* Pandoc, por defecto, también pasa cualquier fragmentos de código HTML que se identifica dentro del código de Markdown hacia el documento de destino, en caso de que sea basado en HTML (esto incluye feEPUB o salidas con  RevealJS).

* Esto permite que cualquier formato específico pueda conseguirse  en el formato de documento de salida. [Ver ejemplos de Pandoc][3] o el artículo de Kieran Healy [Plain Text, Papers, Pandoc][4].

También soporta enlaces referenciados. **[Click here](#tab:fsttable)** para saltar a  una página con una tabla.

\newpage{}

## Como trabaja

El funcionamiento más o menos es el siguiente:

1. Escribe un documento Markdown, y agrega  fragmentos de código \LaTeX\ entre ellos.
1. Guarda el documento con una extensión  `.md`.
1. Ejecuta  la conversión Pandoc :

    ```` {.bash}
     pandoc --from=markdown --output=Ejemplo-pandoc.tex
     Ejemplo-pandoc.md --to=latex --standalone
    ````

    o

    ```` {.bash}
     pandoc --from=markdown --output=Ejemplo-pandoc.pdf Ejemplo-pandoc.md                                   \
            --variable=geometry:"margin=0.5cm, paperheight=421pt, paperwidth=595pt" \
            --highlight-style=espresso
    ````

Si yo quiero que aparezcan palabras en colores   \textcolor{red}{rojo} o en  \textcolor{green}{diferentes}
\textcolor{blue}{color}, el código de  Markdown que produce  las previas sentencias  es mostrado sin una sintaxis de resaltado (a diferencia de los anteriores dos bloques de código):

     [...] as \textcolor{red}{red} or in a \textcolor{green}{different}
     \textcolor{blue}{color}.

Después de este parrafo, se inserta una nueva página. Se  agrega 
`\newpage{}` debajo,  sobre una nueva línea 

\newpage{}

Este fue el código fuente de Markdown (con contexto) para el salto de página que precede a esto:
```` {.markdown}

Después de este parrafo, se inserta una nueva página. Yo agrego `\newpage{}`
 debajo,  sobre una nueva línea 
 
\newpage{}
````

## Insertando  una tabla de  \LaTeX\ 

Aquí viene una tabla. El código es insertado como  \LaTeX\ en el código fuente del documento Markdown :

\begin{table}[h]
\centering
\begin{tabular}{|r|l|}
  \hline
  7C0 & hexadecimal \\
  3700 & octal \\ \cline{2-2}
  11111000000 & binario \\
  \hline \hline
  1984 & decimal \\
  \hline
\end{tabular}
\caption\small\textit{\textcolor{magenta}{Esta tabla muestra algunos datos }}
\label{tab:fsttable}
\end{table}

Este es el código Markdown para la tabla anterior, incluyendo el contexto textual :

```` {.latex}
Aquí viene una tabla. El código es insertado como  \LaTeX\ en 
el código fuente del documento Markdown :

\begin{table}[h]
\centering
\begin{tabular}{|r|l|}
  \hline
  7C0 & hexadecimal \\
  3700 & octal \\ \cline{2-2}
  11111000000 & binario \\
  \hline \hline
  1984 & decimal \\
  \hline
\end{tabular}
\caption\small\textit{\textcolor{magenta}{Esta tabla muestra algunos datos}}
\label{tab:fsttable}
\end{table}

Este es el código Markdown para la tabla anterior, incluyendo el contexto textual :
````

## Insertando  una Fórmula de  \LaTeX\ 

Para incluir fórmulas matemáticas en Markdown  encierra el código a convertir con los caracteres **`$`**, como se muestra a continuación:

```` {.latex}
 $\frac{n!}{k!(n-k)!} = \binom{n}{k}$
````

El resultado:

$\frac{n!}{k!(n-k)!} = \binom{n}{k}$



[1]: http://daringfireball.net/projects/markdown/
[2]: http://pandoc.org/
[3]:http://pandoc.org/demo/example9/pandocs-markdown.html
[4]:http://kieranhealy.org/blog/archives/2014/01/23/plain-text/