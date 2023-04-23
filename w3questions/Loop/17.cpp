#include <iostream>

using namespace std;

int main(){
    int posture{4};
    for(int i{0}; i < posture; i++){
        for(int j{0};j<posture;j++){
            cout<<" #";
        }
        cout<<endl;
    }
}