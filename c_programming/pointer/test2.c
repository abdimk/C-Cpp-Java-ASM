// malloc
//realloc
//calloc
//free

#include <stdio.h>
#include <stdlib.h>


int main()
{

	printf("Enter the size of the array:");
	int n;
	scanf("%i",&n);
	int *p = (int*)calloc(n * sizeof(int));

	// enter a value to that heap space
	
	for(int i = 0; i < n; i++){
		p[i] = i + 1;
	}

	// print the value

	for(int i = 0; i < n; i++){
		printf("%d ",p[i]);
	}

	free(p);
	printf("\n");

	printf("the memory address of the array is : %p\n",p);
	return 0;
}