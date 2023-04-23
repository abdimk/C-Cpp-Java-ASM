#include <iostream>

using namespace std;

void perfect(int num){
    int i{1},u{1},sum{0};
    for(i; i <= num; i++){
        for(u ; u <= num; u++){
            if(u < i){
                if(i % u==0){
                    sum+=u;
                }
            }
        }
        if(sum==i){
            cout<<i<<endl;
        }
        u = 1;
        sum = 0;
    }
}

int main(){
    perfect(500);
}