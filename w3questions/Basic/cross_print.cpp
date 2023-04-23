#include <iostream>

using namespace std;

int main(){

   for(int i{1}; i < 5; i++){
        cout<<"\t*"<<"\n";
        if(i ==2){
            for(int j{1}; j <=5; j++){
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }
   }
}