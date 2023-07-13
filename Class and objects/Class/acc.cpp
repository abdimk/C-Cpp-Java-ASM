#include <iostream>

using std::cin,std::cout,std::endl;

class Account{
private:
    double balance {0};
public:
    void set_balance(double bal);
    double get_balance();
};

void Account::set_balance(double bal){
    Account::balance+=bal;
}
double Account::get_balance(){
    return Account::balance;
}

int main(){
    Account abdisa;
    abdisa.set_balance(1000);
    return 0;
}