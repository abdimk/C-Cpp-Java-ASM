/*
1. Write a C++ program to find the largest element of a given array of integers. 
Go to the editor Click me to see the sample solution
*/

#include <iostream>

using namespace std;

int find_largest(int *array, size_t size){
    int temp;
    for(size_t i{0}; i < size; i++){
        for(size_t j{i + 1}; j < size; j++){
            if(array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }
        }
        
    }

    return array[0];
    
}

int main(){
    int arr[]{44,25,52,72,34,12,10};
    int arr_size(sizeof(arr) / sizeof(arr[0]));

    find_largest(arr, arr_size);
}