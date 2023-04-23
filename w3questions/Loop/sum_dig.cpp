/*Write a program in C++ to find the sum of the digits of a 
given number.
Sample Output:
Input a number: 1234
The sum of digits of 1234 is: 10*/

#include <iostream>

using namespace std;


int sum(int num){
    int total{0};
    int mynum = num;

    while(mynum > 0){
        total += mynum % 10;
        mynum = mynum / 10;
    }
    return total;
}
int main(){
    cout<<sum(1234)<<endl;
}