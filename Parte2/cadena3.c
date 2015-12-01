/* Programa en C, versiones de las funciones strncpy, 
 * strncat y  strncmp.
 */

#include <stdio.h>
#define MAX 20

char *mi_strncpy(char *s, const char *t, int n);
char *mi_strncat(char *s, const char *t, int n);
int mi_strncmp(const char *s, const char *t, int n);

int main(void)
{
	char s[MAX] = "milagros";
	char *t = "mili";

	/* prueba de  mi_strncpy */
	mi_strncpy(s, t, 5);
	printf("mi_strncpy - s = \"%s\"\n", s);
	/* prueba de  mi_strncat */
	mi_strncat(s, t, 20);
	printf("mi_strncat - s = \"%s\"\n", s);
	/* prueba  de mi_strncmp */
	printf("mi_strncmp - retorna  %d comparando \"%s\" con  \"%s\"\n", 
			mi_strncmp(s, t, 4), s, t);

	return 0;
}

char *mi_strncpy(char *s, const char *t, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = *(t + i) ? *(t + i) : '\0';

	return s;
}

char *mi_strncat(char *s, const char *t, int n)
{
	int i;

	while (*++s)
		;
	for (i = 0; i < n && *(t + i); i++)
		*(s + i) = *(t + i);
	*(s + i) = '\0';

	return s;
}

int mi_strncmp(const char *s, const char *t, int n)
{
	int i;

	for (i = 0; i < n && *(s + i) == *(t + i) && *(s + i); i++)
		;
	if (*(s + i) != *(t + i))
		 return (unsigned char)*(s + i) - (unsigned char)*(t + i);
	
	return 0;
}
