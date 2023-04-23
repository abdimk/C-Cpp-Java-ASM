/*Write a program in C++ to find the Greatest Common Divisor 
(GCD) of two numbers. 
Sample Output:
Input the first number: 25
Input the second number: 15
The Greatest Common Divisor is: 5
*/

#include <iostream>
#include <vector>

using namespace std;


int gcd(int num1, int num2){
    int value;
    for(int i{1}; i < num1 && i < num2; i++){
        if(num1 % i == 0 && num1 % i ==0){
            value=i;
        }
    }

    return value;
}
int main()
{
    cout<<gcd(12, 24)<<endl;
}


