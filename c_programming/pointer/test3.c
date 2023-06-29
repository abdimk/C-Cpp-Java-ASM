#include <stdio.h>
#include <stdlib.h>

int Add(int *a, int *b){
    printf("The addres of a in Add,%p\n",&a);
    printf("%p\n",a);
    printf("%i\n",*a);
    int c = (*a) + (*b);
    return c;
}

int main(){
    int a = 10, b = 5;

    printf("%p\n",&a);
    int c = Add(&a,&b);
    return 0;
}