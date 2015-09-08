
/*Un programa que imprime los valores de valores 
 * enteros y flotantes en varios formatos 
 * Mayor informacion en : https://es.wikipedia.org/wiki/Printf
 */

#include <stdio.h>

int main(void)
{
  int m;
  float c;
  float d;

  m = 4;
  c = 839.21f;
  d = 1.3f;

  printf("|%d|%3d|%-3d|%3.4d|\n", m, m, m, m);
  printf("|%10.3f|%9.3e|%-10g|\n", c, c, c);
  printf("|%1.3f|%2.3e|%-10g|\n", d, d, d);

  return 0;
}
