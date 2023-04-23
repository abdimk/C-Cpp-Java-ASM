#include <iostream>

using namespace std;


void separete(int *array, int size){
    int temp;
    for(int i{0}; i < size; i++){
        for(int j{i + 1}; j < size; j++){
            if(i % 2 ==0){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }
        }
    }

    // reverse the array
    int start{0},end{size - 1};
    while(start < end){
        int temp;
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;       
    }
}
void print_function(int *array, int size){
    cout<<"[";
    for(int i{0}; i < size ; i++){
        cout<<array[i]<<" ";
    }
    cout<<']'<<endl;
}
int main(){
    int arr[]{3,2,4,6,5};
    int size_arr{sizeof(arr) / sizeof(arr[0])};
    print_function(arr, size_arr);
    separete(arr, size_arr);
    print_function(arr, size_arr);
}