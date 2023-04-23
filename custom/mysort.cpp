#include <iostream>
#include <vector>

using namespace std;

class Sort{
public:
    vector <int> bubble_sort{};
    int *array_ptr{nullptr};
    int Size;
    
    void push(int *array, int size);

    Sort(int *array, int size){
        cout<<"[";
        for(size_t i{0}; i < size; i++){
            cout<<array[i]<<" ";
        }
        cout<<"]"<<endl;
        Size = size;
        array_ptr = array;
        push();
    }
    void push(){
        for(size_t i{0}; i < Size; i++){
            bubble_sort.push_back(*(array_ptr + i));
        }
    }
    void print_fuction()
    
    
};

int main(){
    int arr[]{2,3,4,2,4};
    size_t size_r{sizeof(arr) / sizeof(arr[0])};
    Sort u1 = Sort(arr, size_r);
    
    
}
