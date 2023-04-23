/*6. Write a C++ program to find all elements in an array of integers 
that have at least two significant elements.
*/
#include <iostream>

using namespace std;

void r_type(int *array, int size){
    cout<<"Elements that have two siginficant are : [";
    for(size_t i{0}; i < size; i++){
        if(array[i] >= 10){
            cout<<array[i]<<" ";
        }
    }
    cout<<"]"<<endl;
}

int main(){
    int arr[]{1,32,4,5,20,8,9,4,12,9};
    int arr_size(sizeof(arr) / sizeof(arr[0]));

    r_type(arr, arr_size);
}