// Write a C++ program to make such a pattern like a right angle triangle with the number increased by 1


#include <iostream>

using namespace std;

int main(){
    int rows{5};
    int k{1};
    for(int i{1}; i <= rows; i++){
        for(int j{1}; j < i; j++){
            cout<<k++<<" ";
            
        }
        cout<<endl;
        
    }


    return 0;
}