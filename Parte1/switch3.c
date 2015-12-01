/* Uso de switch en el caso de caracteres
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

  char i =getchar(); //  scanf("%d",&i);

  printf ("%d\n", i);

  switch (i) {

  case 'A': case 'a':
  case 'E': case 'e':
  case 'I': case 'i':
  case 'O': case 'o':
  case 'U': case 'u':
    puts ("Una vocal!");
    break;
  default:
    puts ("No es una vocal!");
  }
  
  return 0;
}
