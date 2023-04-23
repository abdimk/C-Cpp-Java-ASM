/*Write a C++ program to separate 0s and 1s from a given array of values 0 and 1.*/
#include <iostream>

using namespace std;

void r_type(int *array, int size){
    // do the operation
    int temp;
    for(size_t i{0}; i < size; i++){
        for(size_t j{i + 1}; j < size; j++){
            if(array[j] > array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

   

    // print the numbers
    cout<<"[";
    for(size_t i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;

}
int main(){
    int arr[]{0,1,0,0,1,1,1,0,1,0};
    int size_arr(sizeof(arr) / sizeof(arr[0]));


    r_type(arr, size_arr);

}

