/* Un calculador de sumas y multiplicaciones con parentesis
  *Lee expresiones desde stdin y escribe sus valores a stdout
  * El formato de entrada puede ser una secuencia de numeros
  * decimales o (expr +expr) o (expr*expr)
  *
  * Los parentesis son requeridos y solo numeros positivos pueden ser 
  * expresados. Hay muchas cosas nuevas en este programa
  * getchar(): devuelve el caracter que se halle en stdin.
  * ungets(): 'empuja al caracter' sobre un stream especificado
  * 		de manera que este disponible para la siguiente 
  * 		operacion de lectura-
  * isdigit(): comprueba si el caracter pasado es un 
  * 		caracter digito decimal
 */

#include <stdio.h>
#include <ctype.h>

// retorna el proximo caracter desde stdin 

int m_char(void)
{
    int c;

    c = getchar();
    if(c != EOF) ungetc(c, stdin);	/* ponemos de nuevo el caracter */
    
    return c;
}

/* lee un entero escrito en notacion decimal desde stdin hasta el primer
 * no digito y lo retorna.  Retorna  0 si no hay digitos. */
int leerNumero(void)
{
    int acumulador;	/* el numero hasta ahora */
    int c;		/* proximo caracter */

    acumulador = 0;

    while((c = m_char()) != EOF && isdigit(c)) {
	c = getchar();			
	acumulador *= 10;		/* cambiamos los digitos anteriores*/
	acumulador += (c - '0');	/* agregamos valor decimal de nuevo digito */
    }

    return acumulador;
}

#define ERROR_EXPRESION (-1)

/* lee  una expresion desde stdin y  retorna su valor */
/* retorna  ERROR_EXPRESION si hay error */
int leeExpresion(void)
{
    int e1;		/* valor de la primer expresion */
    int e2;		/* valor de la segunda expresion */
    int c;
    int op;		/* operacion: '+' or '*' */

    c = m_char();

    if(c == '(') {
	c = getchar();

	e1 = leeExpresion();
	op = getchar();
	e2 = leeExpresion();

	c = getchar();
	if(c != ')') return ERROR_EXPRESION;

	/* opciones  */
	switch(op) {
	case '*':
	    return e1*e2;
	    break;
	case '+':
	    return e1+e2;
	    break;
	default:
	    return ERROR_EXPRESION;
	    break;
	}
    } else if(isdigit(c)) {
	return leerNumero();
    } else {
	return ERROR_EXPRESION;
    }
}

int main(int argc, char **argv)
{
    int e;	/* valor de la expresion */

    while((e = leeExpresion()) != ERROR_EXPRESION) {
	printf("%d\n", e);
     }

    return 0;
}





