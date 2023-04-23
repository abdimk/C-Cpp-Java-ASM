/*
write a c++ program to find a number that occurs an odd number
of times in a given array of postive integers.
*/

#include <iostream>

using namespace std;

void odd_occurance(int *array, int size){
    int counter{0};
    for(int i{0}; i < size; i++){
        for(int j{0}; j < size; j++){
            if(array[i] == array[j]){
                counter++;
            }
        }
        if(counter % 2 != 0){
            cout<<array[i]<<endl;
            break;
        }
    }
}

int main(){
    int arr[]{5,7,8,8,5,8,7,7};
    int size_arr{sizeof(arr) / sizeof(arr[0])};
    odd_occurance(arr, size_arr);
}