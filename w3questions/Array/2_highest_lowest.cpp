/*
write a cpp program to find the second higiest and lowest element in array
*/

#include <iostream>

using namespace std;

void second_highest_lowest(int *array, int size){
    int temp;
    int j;
    // assending insertion sort algorihtm 
    for(int i{0}; i < (size + 1) - 1; i++){
        temp = array[i];
        j = i - 1;
        while(temp < array[j] && (array[j] > 0)){
            array[j + 1] = array[j];
            j-=1;
        }
        array[j + 1] = temp;
    }

    //print to the console;
    cout<<"The array is :[";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;
    cout<<"The second higest:"<<(array[size - 2])<<endl;
    cout<<"The second lowest:"<<(array[1])<<endl;
    


}

int main(){
    int arr[]{9,122,12,1};
    int size_arr{sizeof(arr) / sizeof(arr[0])};
    second_highest_lowest(arr, size_arr);
}