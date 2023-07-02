#include <iostream>
#include <stdlib.h>
#include <string>

using std::cout,std::endl;


class Account{
private:
    std::string name;
    int balance;
public:
    Account(std::string name, int balance){
        this->name = name;
        this->balance =  balance;
    }
    void get_balance(){
        cout<<"Name:"<<name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};

int main()
{
    Account* a1 = new Account("abdisa", 10000);
    a1->get_balance();
    return 0;
}