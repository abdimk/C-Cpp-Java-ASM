// algorithm for perfect number;

#include <iostream>
#include <vector>

using namespace std;

//
bool perfect(int num){
    vector<int>factors{};    
    for(int i{1}; i < num; i++){
        if(num % i ==0){
            factors.push_back(i);
        }
    }

    int total{0};
    for(auto x : factors){
        total+=x;
    }
    if(num == total){
        return true;
    }
    return false;
}


int main(){
    cout<<boolalpha;
    cout<<perfect(28)<<endl;
}
