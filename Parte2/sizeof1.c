//uso del operador sizeof en un programa en C

#include<stdio.h>

typedef struct
{
    int  campo1;
    long campo2;
    char campo3[30];
}EjemploEstructura;

typedef union
{
    int campo1;
    double campo2;
}EjemploUnion;

typedef enum
{
    enum1,
    enum2,
    enum3
}EjemploEnum;

int main(void)
{
    printf("char          : %d bytes\n"
           "short int     : %d bytes\n"
           "int           : %d bytes\n"
           "long int      : %d bytes\n"
           "long long int : %d bytes\n"
           "float         : %d bytes\n"
           "double        : %d bytes\n"
           "long double   : %d bytes\n"
           "EjemplolStruct : %d bytes\n"
           "EjemplolUnion  : %d bytes\n"
           "EjemplolEnum   : %d bytes\n"
           "void*         : %d bytes\n"
           "char*         : %d bytes\n"
           "short int*    : %d bytes\n"
           "int*          : %d bytes\n"
           "long int*     : %d bytes\n"
           "long long int*: %d bytes\n"
           "float*        : %d bytes\n"
           "double*       : %d bytes\n"
           "long double*  : %d bytes\n"
           "EjemplolStruct*: %d bytes\n"
           "EjemplolUnion* : %d bytes\n"
           "EjemplolEnum*  : %d bytes\n",
           sizeof(char),
           sizeof(short),
           sizeof(int),
           sizeof(long),
           sizeof(long long),
           sizeof(float),
           sizeof(double),
           sizeof(long double),
           sizeof(EjemploEstructura),
           sizeof(EjemploUnion),
           sizeof(EjemploEnum),
           sizeof(void*),
           sizeof(char*),
           sizeof(short*),
           sizeof(int*),
           sizeof(long*),
           sizeof(long long*),
           sizeof(float*),
           sizeof(double*),
           sizeof(long double*),
           sizeof(EjemploEstructura*),
           sizeof(EjemploUnion*),
           sizeof(EjemploEnum*));
    return 0;
}