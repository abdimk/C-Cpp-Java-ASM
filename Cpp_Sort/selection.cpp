// selection sort algorithm 

#include <iostream>

using namespace std;

void print_function(int *array, int size){
    cout<<"[";
    for(int i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main(){

    int myarray[]{12,54,32,45,20,49,56};
    int size{sizeof(myarray)/ sizeof(myarray[0])};
    int min, temp, i , p ;


    print_function(myarray, size);
    for(int i{0}; i < size;i++){
        min = myarray[i];
        p = i;
        for(int j{i + 1}; j < size; j++){
            if(min > myarray[j]){
                min = myarray[j];
                p = j;
            }
        }
        temp = myarray[i];
        myarray[i] = myarray[p];
        myarray[p] = temp;
    }

    cout<<endl;
    print_function(myarray, size);
    
}