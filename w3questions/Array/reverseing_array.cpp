#include <iostream>

using namespace std;


void reverse(int *array, int size){
    // the reverse algorithm 
    int start{0};
    int end{size - 1};
    while(start < end){
        int temp = array[start];
        array[start] = array[end];
        array[end] =  temp;
        start++;
        end--; 
    }


}

void print_function(int *array, int size){
    cout<<"[";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main(){
    int arr[]{3,4,5,8,2,9,6};
    int size_array{sizeof(arr) / sizeof(arr[0])};

    print_function(arr, size_array);

    reverse(arr, size_array);

    print_function(arr, size_array);

}