#include <iostream>

class Account
{
private:
    double balance = 0.0;
public:
    void deposite(double amount);
    virtual void withdraw(double balance, double amount);
};

void Account::deposite(double amount){
    if(amount <=0){
        std::cout<<"The deposite amount should be >= 0"<<std::endl;
    }else{
        balance+= amount;
    }
}

void Account::withdraw(double balance, double amount){
    if(balance - amount <= 0){
        std::cout<<"Insufficent balance"<<std::endl;
    }else{
        balance-= amount;
    }
}


class Trust:public Account
{
public:
    virtual void withdraw(double balance, double amount){
        amount = amount * (amount * 0.5);
        Account::withdraw(balance, amount);
    }
};


int main()
{

    return 0;
}