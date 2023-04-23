#include <iostream>
#include <vector>

using namespace std;

int perfect(int num){
    vector <int> factors{};
    int total{0};
    for(int i{1}; i < num; i++){
        if(num % i == 0){
            factors.push_back(i);
        }
    }
    for(auto x : factors){
        total+=x;
        
    }
    if(total == num){
        return num;
    }
    return 0;
   
}

void gen_perfect(int start, int end){
    for(int i{start}; i < end; i++){
        if(perfect(i)!=0){
            cout<<i<<"\n";
        }
    }
}
int main(){
    gen_perfect(1,500);
}