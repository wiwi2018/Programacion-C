// Programa que muestra diferencias del operador
// sizeof en el uso de arrays de caracteres


#include <stdio.h>
int main(void)
{
char s1[8] = { 'T', 'e', 'x', 't', '\0' };
char s2[] = { 'T', 'e', 'x', 't', '\0' };
char s3[] = "Text";
char *s4 = "Text";
printf("s1 = %s, sizeof s1 =%lu\n",s1, sizeof s1);
printf("s2 = %s, sizeof s2 =%lu\n",s1, sizeof s2);
printf("s3 = %s, sizeof s3 =%lu\n",s1, sizeof s3);
printf("s4 = %s, sizeof s4 =%lu\n",s1, sizeof s4);

return 0;

}
