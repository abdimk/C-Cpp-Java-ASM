#include <iostream>
#include <vector>

using namespace std;

int is_prime(int num){
    vector <int> factors{};
    for(int i{2}; i < num; i++){
        if(num % i==0){
            factors.push_back(i);
        }
    }

    if(factors.size()==0){
        return num;
    }
    return 0;
}

void non_prime(int uperbound){
    if(uperbound < 2){
        cout<<"invalid uperbound can't be lessthan 2"<<endl;
    }
    cout<<"[";
    for(int i{2}; i < uperbound; i++){
        if(is_prime(i)==0){
            cout<<i<<" ";
        }
    }
    cout<<"]"<<endl;
}
int main(){
    non_prime(25);
}