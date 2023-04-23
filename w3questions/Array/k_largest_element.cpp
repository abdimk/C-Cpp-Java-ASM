/*
Write a C++ program to find the k largest 
elements in a given array of integers.
*/
#include <iostream>

using namespace std;

void r_type(int *array, int size){
    int temp;
    for(size_t i{0}; i < size; i++){
        for(size_t j{i + 1}; j < size; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void kth_largest(int *array, int num){
    cout<<"The "<<num<<"th largest element is: "<<array[num]<<endl;
}


int main(){
    int arr[]{12,32,45,64,23,89,33,54,25,12,36,29,42,47,21};
    int arr_size(sizeof(arr) / sizeof(arr[0]));

    r_type(arr, arr_size);
    kth_largest(arr, 5);
    

}
