#include <iostream>

using namespace std;

void print_function(const int *const array, size_t size){
    cout<<"[";
    for(size_t i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]";
}

int *array_memory(int *array1, size_t size1, int *array2, size_t size2){
    int *my_array{nullptr};
    int position{0};
    my_array = new int [size1*size2];

    for(size_t i{0}; i < size2; i++){
        for(size_t j{0}; j < size1; j++){
            my_array[position] = array1[j] * array2[i];
            ++position;
        }
    }

    return my_array;

}

int main(){

    int arr1[]{2,4,3,6,7};
    int arr2[]{5,3,6,5,3};

    int size1{sizeof(arr1) / sizeof(arr1[0])};
    int size2{sizeof(arr2) / sizeof(arr2[0])};

    int *array_ptr{array_memory(arr1,size1,arr2,size2)};

    int r_size{size1*size2};

    print_function(array_ptr, r_size);


    delete [] array_ptr;
}