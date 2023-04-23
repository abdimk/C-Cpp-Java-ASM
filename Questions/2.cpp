//find the minimum and maximum element of an array

#include <iostream>

using namespace std;

void r_type(int *array, int size){
    int temp;
    for(int i{0}; i < size; i++){
        for(int j{i + 1}; j < size; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout<<"min: "<<array[0]<<", max: "<<array[size - 1]<<endl;
}

int main(){
    int arr[]{3,2,1,56,1000,167};
    int arr_size{sizeof(arr) / sizeof(arr[0])};
    r_type(arr, arr_size);
}