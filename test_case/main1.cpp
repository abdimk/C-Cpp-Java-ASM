#include <iostream>

using namespace std;

// function to find the length of the array
int find_size(int *array){
    int size{(sizeof(array)/2)};
    return size;
}

int display_array(int *array1, int *array2, size_t size){
    int *sum{nullptr};
    int a , b;
    sum = new int [size];
    for(size_t i{0}; i < size; i++){
        
    }
    return 0;
}
int main()
{
    int array1[]{1,2,3,4};
    int array2[]{1,2,3,4};

    display_array(array1,array2,find_size(array1));
    return 0;
}