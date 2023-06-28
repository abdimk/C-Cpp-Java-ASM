// character arrays and pointers

#include <stdio.h>

int print(char *c)
{
    while(*c != '\0')
    {
        printf("%c ", *c);
        c++;
    }
    printf("\n");
    return 0;
}


int main()
{
    char name[5] = "JHON";
    int size = sizeof(name) / sizeof(name[0]);

    print(name);
    return 0;

}