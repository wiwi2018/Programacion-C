// Ejemplo del uso de arreglos y estructuras

#include<stdio.h>

struct lang{
        float x;
        float y;
};

void paradig(struct lang *c)
{

/* Por completar ...*/

}

int main(void)
{
       int i;
       struct lang leng[10];

       for(i=0;i < 12; i++){

               leng[i].x = (float)i; /*(float) es un cast --cambia el tipo*/
               leng[i].y = (float)i;
       }

       // Bucle de trabajo

       for(;;){ // bucle por siempre
               for(i =0 ; i < 10; i++){
                       paradig(&(leng[i]));
               }

               // Salida del resultado

               for(i=0; i < 10; i++){
                       printf("lang %d:(%.2f, %.2f)\n", i,leng[i].x, leng[i].y);
               }
       }

       return 0;
}



