#include <iostream>

using namespace std;

void print_function(const int *const arr, size_t  size){
    cout<<"[";
    for(size_t i{0}; i < size; i++){
        cout<<arr[i]<<" ";
    }   
    cout<<"]";
}

int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2){
    
    int *array_ptr{nullptr};
    array_ptr = new int [size1 * size2];
    int position{0};

    for(size_t i{0}; i < size2; i++){
        for(size_t j{0}; j < size1; j++){
            array_ptr[position] = array1[j] * array2[i];
            ++position;
        }
    }

    return array_ptr;

}

int main()
{
    int my_array[]{1,2,3,4,5},my_array2[]{10,20,30};
    int size1{sizeof(my_array) / sizeof(my_array[0])};
    int size2{sizeof(my_array2) / sizeof(my_array2[0])};
    

    int *result{apply_all(my_array, size1, my_array2, size2)};
    int result_size{size1 * size2};

    cout<<"Array1: ";
    print_function(my_array, size1);
    cout<<endl;

    cout<<"Array2: ";
    print_function(my_array2, size2);
    cout<<endl;

    cout<<"Result: ";
    print_function(result, result_size);
    cout<<endl;

    delete [] result;
    return 0;
}