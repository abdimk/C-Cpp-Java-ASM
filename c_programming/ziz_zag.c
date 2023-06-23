#include <stdio.h>


// a function to sawp to numbers in an array

void print_arr(int *arr, size_t siz)
{
	printf("[");
	for(int i = 0; i < siz; i++)
	{
		printf("%i ",arr[i]);
	}
	printf("]\n");
}


void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int arr[] = {3,4,7};
	int siz = sizeof(arr) / sizeof(arr[0]);
	
	print_arr(arr, siz);
	swap(arr[0], arr[2]); 
	print_arr(arr, siz);
	return 0;
}
