#include <iostream>

using namespace std;

int *add_arrays(int *array_1,int *array_2, size_t size){
    int *sum{nullptr};
    sum = new int [size];
    for(size_t i{0}; i < size ; i++){
        for(size_t j{0}; j < size ; j++){
            *(sum + i) = array_1[i] + array_2[j];
            break; 
        }
    }

    return sum;
}
void display(int *array, size_t size){
    for(size_t i{0}; i < size; i++){
        cout<<array[i]<<" ";

    }
    cout<<endl;
}
int main()
{
    int a[]{1,2,3,4}, b[]{1,2,3,4};

    int *total{nullptr};

    total = add_arrays(a,b,3);
    display(total, 3);

    //delete [] total;
    return 0;
}