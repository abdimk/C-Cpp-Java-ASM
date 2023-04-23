#include <iostream>
#include <vector>

using namespace std;

vector <int> two(vector <int> &num, int target){
    for(int i{0}; i < num.size(); i++){
        for(int j{i+1}; j < num.size(); j++){
            if(num[i] + num[j] == target){
               return {i,j}; 
            }
        }
    }

    return {};
}

int main(){
    vector <int> numerial{2,7,11,15};
    int target = 9;

    for(auto x: two(numerial, target)){
        cout<<x<<" ";
    }

    return 0;
}