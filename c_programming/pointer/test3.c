#include <stdio.h>
#include <stdlib.h>

int *Add(int *a, int *b){
    // printf("The addres of a in Add(pointer address),%p\n",&a);
    // printf("The address of  a in main %p\n",a);
    // printf("The value of a in Add %i\n",*a);
    int *c = (int *)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main(){
    int a = 2, b = 4;
    int *int_ptr = Add(&a,&b);
    free(int_ptr);

    printf("%i\n",*int_ptr);
    return 0;
}