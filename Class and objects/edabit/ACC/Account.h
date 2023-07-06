#ifndef __ACCOUNT__H_
#define __ACCOUNT__H_
#include <iostream>

class Account{
    int balance = 0;
public:
    void deposite(int num){
        std::cout<<"Your balance has been credited by :"<<num<<std::endl;
        balance+=num;
        }
    void get_balance(){std::cout<<"Your balance is:"<<balance<<std::endl;}
};
#endif 