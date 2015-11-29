// Programa que imprime los argumentos de la linea de
// comandos y sale 


#include <stdio.h>
int main(int argc, char **argv)
{
while (*argv != NULL)
printf("%s\n", *argv++);
return 0;
}
