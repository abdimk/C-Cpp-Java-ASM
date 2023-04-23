/*
Write a function which will be given as input an array, its size and an integer p. The function will
then cyclically shift the array p positions to the right: each element is moved p positions to the right,
while the last p elements are moved to the beginning of the array. For example: if we have the array
[ 1 2 3 4 5 6], shifting 2 positions to the right should give the array [ 5 6 1 2 3 4 ]. Your function should
work correctly for negative values of p.
*/

#include <iostream>

using namespace std;

void shift(int *array, int size, int p);

int main(){
    int arr[]{1,2,3,4,5,6};
    int arr_size{sizeof(arr) / sizeof(arr[0])};
    int p{2};

    shift(arr, arr_size, p);

    return 0;
}

void shift(int *array, int size, int pos){
    cout<<"before: [";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;

    int tmp[size];
    cout<<size<<endl;
    pos = pos % size;
    cout<<pos<<endl;

    for(int i{0}; i < size; i++){
        tmp[i+pos > 0 ?(i+pos)%size:size+i+pos] = array[i];
    }


    for(int i{0}; i < size; i++){
        array[i] = tmp[i];
    }


    cout<<"After: [";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;

}