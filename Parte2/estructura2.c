// Ejemplo del uso de punteros a struct a funciones

#include<stdio.h>

struct lang{
        int lang1;
        int lang2;
};

void langs(struct lang *f)
{
        f->lang1=10;
        f->lang2 = 34;
}

int main(void)
{
        struct lang Python;
        langs(&Python);  // pasando un puntero a la estructura

        printf("lang1: %d\n", Python.lang1); // imprime "10"
        printf("lang2: %d\n", Python.lang2); // imprime "34"

        return 0;
}

