#include <stdio.h>

int main()
{

    int x = 5;
    printf("First\n");
    printf("Address of x = %p , Value of x = %i\n", &x, x);
    int *p;
    p = &x;
    printf("Second\n");
    printf("Address of x = %p , Value of x = %i\n", &x, x);
    printf("Address of p = %p , Value of p = %i\n", &p, *p);


    // pointer to pointer varibale 

    int **q;
    q = &p;
    **q = 10;
    printf("Thred\n");
    printf("Address of x = %p , Value of x = %i\n", &x, x);
    printf("Address of p = %p , Value of p = %p, der of p = %i\n", &p, p, *p);
    printf("Address of q = %p , Value of q = %p,der of q = %p\n",&q, q, **q);


  



    return 0;
}