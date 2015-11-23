// Aritmetica de punteros y arrays

#include <stdio.h>

int arr[] = {1,23,17,4,-5,100};
int *ptr;

int main(void)
{
    int i;
    ptr = &arr[0];     /* apuntamos  el puntero al primer 
                                      elemento del array */
    printf("\n\n");
    for (i = 0; i < 6; i++)
    {
      printf("arr[%d] = %d   ",i,arr[i]);   
    //printf("ptr + %d = %d\n",i, *(++ptr));
    // printf("ptr + %d = %d\n",i, *(ptr + i)); 
      printf("ptr + %d = %d\n",i, *ptr++);
    }
    return 0;
}
