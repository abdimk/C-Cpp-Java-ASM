/*8. Write a program in C++ to find the last prime number 
that occurs before the entered number. 

simple input:50
output:47
*/

#include <iostream>
#include <vector>

using namespace std;

int is_prime(int num){
    vector <int> factors{};
    for(int i{2}; i < num; i++){
        if(num % i ==0){
            factors.push_back(i);
        }
    }

    if(factors.size() == 0){
        return num;
    }
    return 0;
}

int gen_prime(int required){
    vector <int> primes{};
    for(int i{1}; i < required; i++){
        if(is_prime(i) != 0 && is_prime(i) != 1){
            primes.push_back(i);
        }
    }

    return primes[(primes.size()) - 1];
}

int main(){
    cout<<gen_prime(50)<<endl;
}