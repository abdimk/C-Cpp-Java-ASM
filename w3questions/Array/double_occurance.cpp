/* write a cpp program to find the two repeating elements 
in a given array of integers
*/
#include <iostream>

using namespace std;

void doub_occurance(int *array, int size){
    for(int i{0}; i < size; i++){
        
        for(int j{i + 1}; j < size; j++){
            if(array[i] == array[j]){
                
                cout<<array[i]<<" ";
            }
        }
        
       
    }
    cout<<endl;
}

int main(){
    int arr[]{1,2,3,5,5,7,8,8,9,9,2};
    int size_arr{sizeof(arr) / sizeof(arr[0])};

    doub_occurance(arr, size_arr);
}