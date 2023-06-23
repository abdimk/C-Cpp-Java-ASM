// BUBBLE SORT USING C

#include <stdio.h>



// print function

void print_function(int *arr, size_t siz){
	printf("[");
	for(int i = 0; i < siz; i++){
		printf("%d",arr[i]);
		printf(" ");
	}
	printf("]\n");
}

void bubble_sort(int *arr, size_t siz){
	int temp;
	for(int i = 0; i < siz; i++){
		for(int j = i + 1; j < siz; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
 	int scores[]= {5,3,6,9,4,1};
 	size_t size = sizeof(scores) / sizeof(scores[0]);
	
	print_function(scores, size); // before sorting

	// during sorting
	bubble_sort(scores, size);

	print_function(scores, size); // after sorting


	return 0;	
}
