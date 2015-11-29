// Ejemplo del uso de punteros  a estructuras 

#include <stdio.h>

// Declaramos la estructura que usaremos despues

struct struc2{
        int a;
        float b;
};

int main(void)
{
        struct struc2 m1;
        struct struc2 *m2; /* este es un puntero a la estructura 'struc2'*/

        m2 = &m1;
        m1.a = 56; // forma usual de struct

        /* Desde que  b es un puntero, desreferenciamos antes de poder usarlo*/

        (*m2).a = 57;



        m2 = &m1;
        m1.a = 56; // forma usual de struct

        /* Desde que  b es un puntero, desreferenciamos antes de poder usarlo*/

        (*m2).a = 57;

        // Usemos el 'operador flecha' para hacer lo mismo que la linea anterior

        m2 ->a = 57;

        return 0;
}




