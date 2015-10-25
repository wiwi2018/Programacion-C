/* Normalmente se declara un puntero  a array de la siguiente forma
*
* <tipo de dato> (*<nombre de ptr>)[<un entero>] 
*/

#include<stdio.h>

int main(void)
{

    char arr[4];
    char (*ptr)[4];
    
     arr[0] ='M';
     arr[1] = 'i';
     arr[2]='l';
	 arr[3]='i';

	 ptr = &arr;

	 return 0;
}

