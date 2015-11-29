// Uso del tipo struct en C

#include <stdio.h>

// Declaramos el tipo que usaremos despues
struct stru1{
        int a;
        float b;
};

int main(void)
{
        /*Declaramos una variable "s" de tipo "struct" stru1*/
        struct stru1 s;

        s.a = 3.5; //asignamiento en struct
        s.b = 4.6;

        printf("El campo a en s  es:%d\n", s.a);

        return 0;
}
