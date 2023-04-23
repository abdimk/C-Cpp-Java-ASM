//Write a program in C++ to display a pattern like a right angle triangle using an asterisk

#include <iostream>

using namespace std;

int main()
{
    int rows{5};
    for(int i{0}; i <= rows; i++){
        for(int j{0}; j < i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}