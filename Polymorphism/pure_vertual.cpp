#include <iostream>
#include <string>

class Account
{
private:
    double balance = 0.0;
public:
    Account(double balance){
        this-> balance = balance;

    }
    virtual void fun() = 0;  // purevirtual function 

};


int main()
{ 
    Account a;

    return 0;
}