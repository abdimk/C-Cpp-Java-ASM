#include <iostream>

using namespace std;

void sort(int *array, int size){
    int temp;
    for(int i{0}; i < size; i++){
        for(int j{i + 1}; j < size; j++){
            if(array[i] < array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    int start{0},end{size - 1};

    while(start < end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }


    // print function
    cout<<"[";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main(){
    int arr[]{0,1,2,2,1,1,0,0,1};
    int size_arr{sizeof(arr)  / sizeof(arr[0])};

    sort(arr, size_arr);
}