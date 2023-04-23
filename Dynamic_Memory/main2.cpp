#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value){
    int *new_storage{nullptr};
    new_storage = new int [size];

    for(size_t i{0}; i < size; i++){
        *(new_storage + i) = init_value;
    }

    return new_storage;
}

int display(int *array, int size){
    for(int i{0}; i < size; i++){
        cout<<array[i]<<endl;
    }

    return 0;
}

int main(){
    int *my_array;
    my_array = create_array(10, 2);
    
    display(my_array, 10);

    delete [] my_array;
    return 0;
}












