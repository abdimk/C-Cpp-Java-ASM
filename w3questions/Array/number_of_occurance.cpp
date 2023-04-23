#include <iostream>

using namespace std;

void occurance(int *array, int size, int num){
    int counter{0};
    for(int i{0}; i < size; i++){
        if(array[i]==num){
            counter++;
        }
    }
    cout<<counter<<endl;
}

int main(){
    int arr[]{5,7,8,8,5,8,7,7};
    int size_arr{sizeof(arr) / sizeof(arr[0])};
    occurance(arr, size_arr, 7);
}