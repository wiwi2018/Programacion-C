// Ejemplo del uso de break

#include <stdio.h>
 
int main() {
   char tecla;
 
   printf("Presiona alguna tecla o E para salir:\n");
   while(1) {
     scanf("%c", &tecla);
     // si E o e, salir
     if (tecla == 'E' || tecla == 'e')
       break;
   }
   printf("Nos vemos!\n");
   return 0;
}
