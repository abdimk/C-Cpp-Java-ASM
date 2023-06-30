#include <stdio.h>
#include <stdlib.h>
/*
int Add(int a, int b){
    return a + b;
}
int main(){
    int c;
    int (*func_ptr)(int,int) = &Add;
    c = (*func_ptr)(2,3);

    printf("%d\n",c);
    return 0;
}
*/
/*
void SayHello(char *name){
    printf("Hello, %s\n",name);
}
int main(){
    void(*ptr)(char*);
    ptr = SayHello;
    ptr("Abdisa");
    return 0;
*/

// function pointer as parameter

void SayHello(){
    printf("Hello \n");

}

void B(void(*ptr_func)()) // a function which accepts function to a pointer 
{
    ptr_func();
}

int main(){
    void(*p)() = SayHello;
    B(p);
    return 0;
}