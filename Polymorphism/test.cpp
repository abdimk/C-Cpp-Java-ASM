#include <iostream>


class Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout<<"In Account::withdraw"<<std::endl;
    }

    virtual ~Account(){std::cout<<"Distructor for account class"<<std::endl;}
};

class Checking: public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout<<"In Checking::withdraw"<<std::endl;
    }
    virtual ~Checking(){std::cout<<"Distructor for checking class"<<std::endl;}
};

class Savings:public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout<<"In Savings ::withdraw"<<std::endl;
    }
    virtual ~Savings(){std::cout<<"Distructor for Savings class"<<std::endl;}
};

class Trust:public Account
{
public:
    virtual void withdraw(double amount)
    {
        std::cout<<"In Trust::withdraw"<<std::endl;
    }
    virtual ~Trust(){std::cout<<"Distructor for Trust class"<<std::endl;}
};

int main()
{
    std::cout<<"\n==========Pointers+========="<<std::endl;
    Account* p1 = new Account();
    Account* p2 = new Checking();
    Account* p3 = new Savings();
    Account* p4 = new Trust();


    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    std::cout<<"\n===========Clean up section ========="<<std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}