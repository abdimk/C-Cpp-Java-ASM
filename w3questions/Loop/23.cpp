/*Write a program in C++ to display the sum of the 
series [ 9 + 99 + 999 + 9999 ...].*/

#include <iostream>


using namespace std;


void series(int num){

    int total{0};
    vector <int> myseries{}
    for(int i{0}; i <= num;i++){
        for(int j{1}; j <= i; j++){
            cout<<9<<"";
            
        }
        cout<<" ";
    }

    cout<<"\nThe sum of the series is:"<<total<<endl;
}
int main(){
    series(5);
}