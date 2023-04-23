#include <iostream>
#include <vector>

using namespace std;

int is_prime(int num){
    vector <int> factors{};
    for(int i{2}; i < num; i++){
        if(num % i == 0){
            factors.push_back(i);
        }
    }
    if(factors.size() == 0){
        return num;
    }
    return -1;

}

int main(){
    int start_index = 3;
    int end_index = 14;

    cout<<"[";
    for(int i{start_index}; i < end_index; i++){
        if(is_prime(i) != -1){
             cout<<is_prime(i)<<" ";
        }
    }
    cout<<"]"<<endl;
}