#include <iostream>

using namespace std;

//{3,2,4,5,1}
void sort_function(int *array, size_t size){
    int temp;
    for(size_t i{0}; i < size; i++){
        for(size_t j{i + 1}; j < size; j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

        }
    }
}

void print_function(int *array, size_t size){
    cout<<"[";
    for(size_t i{0}; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"]"<<endl;
}
int main()
{
    int myarray[]{3,2,4,5,1};
    int size1(sizeof(myarray) / sizeof(myarray[0]));
    //before sort
    print_function(myarray, size1);
    

    sort_function(myarray, size1);

    //after sort

    print_function(myarray, size1);

    
}