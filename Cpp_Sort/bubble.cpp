//bubble sort algorithm

#include <iostream>

using namespace std;


void print_function(string str, int *array, int size){
    cout<<str<<" : ";
    cout<<"[";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]";
}
int main()
{
    int arr[]{23,42,12,56,43,21,32};
    int size{sizeof(arr) / sizeof(arr[0])};
    int temp;

    print_function("before",arr,size);

    for(int i{0}; i < size; i++){
        for(int j{i + 1}; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\n"<<endl;
    print_function("after",arr,size);


    return 0;


}