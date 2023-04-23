/*
array[]{5,10,20,15};
20;
*/
#include <iostream>

using namespace std;

int r_type(int *array, int size){
    if(size == 1){
        return array[0];
    }
    if(array[0] >= array[1]){
        return array[0];
    }
    if(array[size - 1] >= array[size - 2]){
        return array[size - 1];
    }

    for(int i{1}; i < size - 1; i++){
        if(array[i] >= array[size - 1] && array[i] >= array[size - 2])
            return array[i];
        
    }

    return 0;
}


int main(){
    int arr[]{1,3,20,4,1,0};
    //int arr[]{10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<r_type(arr,n)<<endl;
}