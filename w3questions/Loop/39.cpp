//Write a C++ program to make such a pattern like a pyramid with numbers increased by 1. 

#include <iostream>

using namespace  std;

int main(){
    int rows{5};
    int k;
    int t=1;
    int space = rows + 4 - 1;

    for(int i{1}; i <= rows; i++){
        for(int k = space; k > 1; k--){
            cout<<" ";
        }

        for(int j{1}; j < i; j++){
            cout<<t++<<" ";
            cout<<endl;
            space--;
        }
    }
    return 0;
}