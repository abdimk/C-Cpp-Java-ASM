#include "Account.hpp"

Account::Account(std::string name , double balance):name{name},balance{balance}{

}
bool Account::deposite(double amount){
    if(amount <= 0){
        return false;
    }
    else{
        balance+=amount;
        return true;
    }
}
bool Account::withdraw(double amount){
    if(balance - amount >=0)
    {
        std::cout<<"Inseficent fund"<<std::endl;
        return false; 
    }   
    else{
        balance-=amount;
        return true;
    }
    
}
void Account::show_balance() const{
    std::cout<<"Your account balance is: "<<balance<<std::endl;
}
