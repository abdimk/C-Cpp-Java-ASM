#include <iostream>

using namespace std;


class Account{
    std::string name;
    int balance{0};
    
    //atriblutes 
public:
    void curent_balance(){
        cout<<balance<<endl;
    }
    void deposit(int amount){
        balance+=amount;
    }

    void withdraw(int amount){
        balance-=amount;
    }
};
int main(){

    Account *abdisa = new Account;

    abdisa -> curent_balance();
    abdisa -> deposit(1000);
    abdisa -> curent_balance(); 


    delete abdisa;

    
}