#include <iostream>

using namespace std;

int r_type(int *array, int size){
    int neg=0,post=0;
    for(int i{0}; i < size; i++){
        (array[i] < 0)? neg++ :post++;
    }
    return (neg > post)? neg:post;
}

int main(){
    int my_array[]{-2,-1,-1,1,2,3};
    int size_arr{sizeof(my_array) / sizeof(my_array[0])};

    cout<<r_type(my_array, size_arr)<<endl;

    return 0;
}