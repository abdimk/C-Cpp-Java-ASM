/*13. Write a program in C++ to calculate 
the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + 
(1+2+3+4+...+n). */

#include <iostream>

using namespace std;

void r_type(int num){
    int total;
    for(int i{1}; i <= num; i++){
        for(int j{1}; j <= i; j++){
            total+=j;
            cout<<j<<" ";
        }
        cout<<"= "<<total;
        cout<<endl;
    }
}
int main(){
    r_type(5);
}