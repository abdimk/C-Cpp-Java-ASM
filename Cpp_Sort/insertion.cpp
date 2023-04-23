// insertion sort 

#include <iostream>

using namespace std;

void print_function(string str, int *array, int size){
    cout<<str<<" :";
    cout<<"[";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]";
}

int main()
{
    int arr[]{34,42,12,32,74,30};
    int size {sizeof(arr) / sizeof(arr[0])};
    int temp;
    int j;

    print_function("before",arr,size);
    
    for(int i{0}; i < (size + 1) - 1; i++){
        temp = arr[i];
        j = i - 1;

        while(temp < arr[j] && (arr[j] > 0)){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

 
    cout<<endl;
    print_function("after",arr,size);

}