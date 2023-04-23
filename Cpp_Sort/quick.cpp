// quick sort algorithm in cpp
#include <iostream>

using namespace std;

int divide(int *array, int size , int start, int end){
    int pivot = array[end];
    int index = start;

    for(int i{start}; i < end; i++){
        if(array[i] < pivot){

            int temp = array[i];
            array[i] = array[index];
            array[index] = temp;
            index++;
        }
    }

    int temp = array[end];
    array[end] = array[index];
    array[index] = temp;

    return index;

}

void Quick_sort(int *array, int size, int start, int end){
    if(start < end){
        int d = divide(array, size, start, end);
        Quick_sort(array, size, start, (d-1));
        Quick_sort(array, size, (d + 1), end);
    }
}

void print_function(int *array, int size){
    cout<<"[";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main()
{
    int myarray[]{32,45,70,54,43,67,21};
    int size{sizeof(myarray) / sizeof(myarray[0])};

    print_function(myarray, size);

    cout<<endl;

    Quick_sort(myarray,size,0, (size - 1));

    print_function(myarray, size);

}