#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Account
{
private:
    double balance;
    std::string name;
public:
    Account():balance{0.0},name{"undefined"}{

    }
    Account(double bal,std::string name):balance{bal},name{name}{

    }
    int get_balance();
    virtual void deposite(double balance);
    virtual ~Account(){}
};

int Account::get_balance(){
    return balance;
}
void Account::deposite(double amount){
    if(amount > 0){
        balance+=amount;
    }
}

class Checking_Account:public Account
{
private:
    double int_rate;
public:
    Checking_Account():Account{0.0, ""},int_rate{0.0}
    {
        
        std::cout<<"Checking account with balance:"<<get_balance()<<std::endl;
    }
    Checking_Account(double bal,std::string name,double int_rate):Account{bal, name},int_rate{int_rate}
    {
       std::cout<<"Checking account: "<<name<<"\n";
       std::cout<<"Balance of :"<<get_balance()<<"\n";
       std::cout<<"Interset rate:"<<int_rate<<std::endl;

    }

    void deposite(double amount){
        if(amount > 0){
            amount = amount + (amount * int_rate / 100);
            Account::deposite(amount);
        }
    }
    ~Checking_Account(){}
};

int main()
{
    //std::unique_ptr<Checking_Account> T1{new Checking_Account{1000, "abdisa", 0.5}};
    //std::cout<<T1->get_balance()<<std::endl;
    // std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>(1000, 0.5);

    //std::unique_ptr<Account> t1 = std::make_unique<Checking_Account>(1000, "abdisa",0.5);
    //auto t1 = std::make_unique<Checking_Account>(1000, "Abdisa",0.5);

    

    std::vector<std::unique_ptr<Account>> acc;
    acc.push_back(std::make_unique<Checking_Account>(300,"Tomas",0.7));
    acc.push_back(std::make_unique<Checking_Account>(800,"Larson",0.2));
    acc.push_back(std::make_unique<Checking_Account>(900,"Makima",0.5));

    for(const auto &a :acc){
        a->deposite(200);
    }
    for(const auto &b :acc){
        std::cout<<b->get_balance()<<std::endl;
    }

    return 0;
}