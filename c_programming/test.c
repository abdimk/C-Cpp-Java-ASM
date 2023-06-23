#include <stdio.h>


void input_value(int *arr, size_t s){
	for(int i = 0; i < s; i++){
		printf("Enter the %i number:",i);
		scanf("%d",&arr[i]);
	}
}

void print_function(int *arr, size_t s){
	printf("[");
	for(size_t i = 0; i < s; i++){
		printf("%i",arr[i]);
		printf(",");
	}
	printf("]\n");
}
int main()
{
	int scores[10];


	
	input_value(scores, 10);
	
	printf("Done ..\n");
	
	print_function(scores, 10);


	return 0;

}
