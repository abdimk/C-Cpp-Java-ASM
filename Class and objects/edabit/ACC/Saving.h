#ifndef __SAVINGACCOUNT__H_
#define __SAVINGACCOUNT__H_
#include "Account.h"
#include <iostream>

class Saving: public Account
{
    int saving_balance = 0;
public:
    void saving_deposite(int num){
        saving_balance+=num;
        std::cout<<"Saving account has been criedte by:"<<num<<std::endl;
    }
    void get_balance(){
        std::cout<<"Your balance in savining account is:"<<saving_balance<<std::endl;
    }
    void total_saved(){
        
    }

};
#endif 
