#include "Saving.hpp"

Saving::Saving(std::string name,double balance, double int_rate):Account{name,balance},int_rate{int_rate}{

}
bool Saving::deposite(double amount){
    amount = amount + (amount * int_rate / 100);
    return Account::deposite(amount);
     

}
Saving::~Saving() {

}