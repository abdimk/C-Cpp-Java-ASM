#include <stdio.h>

int main()
{
 	int a = 1025;
	int *p;
	p = &a;
	printf("size of integer is %li bytes\n",sizeof(int));
	printf("Address = %p, Value = %i\n",p,*p);
	printf("Address = %p, value = %i\n",p+1, *(p+1));

	char *p0;

	p0 = (char *)p;
	printf("Size of char is %li bytes\n",sizeof(char));
	printf("Address = %p, value = %i\n",p0,*p0);



	return 0;
}

