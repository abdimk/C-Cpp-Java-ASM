#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account frank;
    frank.set_balance(1000.0);
    frank.set_name("Frank");

    cout<<frank.get_balance()<<"\n";
    cout<<frank.get_name()<<"\n";

    cout<<boolalpha;
    cout<<frank.deposit(230.9)<<endl;
    cout<<frank.withdraw(200.0)<<endl;

    return 0;
}