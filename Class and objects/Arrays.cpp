#include <iostream>

using namespace std;

class Array{
public:
    int *arr_ptr1{nullptr};
    int *arr_ptr2{nullptr};
    int size1;
    char user_op;


    void display_fucntion(int *ar){
        cout<<"[";
        for(size_t i{0}; i < size1; i++){
            cout<<ar[i]<<" ";
        }
        cout<<"]"<<endl;
    }


    Array(int *array1, int *array2, int size, char op){
        arr_ptr1 = array1;
        arr_ptr2 = array2;
        size1 = size;
        user_op = op;
    
        int my_num[size1];
        switch(op){
            case '+':
                for(size_t i{0}; i < size1; i++){
                    my_num[i] = arr_ptr1[i] + arr_ptr2[i];
                }
                display_fucntion(my_num);
                break;
            case '-':
                for(size_t i{0}; i < size1; i++){
                    my_num[i] = arr_ptr1[i] - arr_ptr2[i];
                }
                display_fucntion(my_num);
                break;
            case '*':
                for(size_t i{0}; i < size1; i++){
                    my_num[i] = arr_ptr1[i] * arr_ptr2[i];
                }
                display_fucntion(my_num);
                break;
            case '/':
                for(size_t i{0}; i < size1; i++){
                    my_num[i] = arr_ptr1[i] / arr_ptr2[i];
                }
                display_fucntion(my_num);
                break;

            default:cout<<"Invalid Operation"<<endl;

        }
    
    }


    
};

int main(){

    int arr1[]{23,34,21,43,53,12,32};
    int arr2[]{24,32,43,21,23,43,26};
    int size_r{sizeof(arr1) / sizeof(arr1[0])};
    
    Array user_arr = Array(arr1, arr2, size_r, '');
    

}