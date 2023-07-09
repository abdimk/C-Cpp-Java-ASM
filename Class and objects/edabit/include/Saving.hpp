#pragma once
#include "Account.hpp"

class Saving:public Account
{
private:
    static constexpr const char *s_name = "Unnamed saving account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Saving(std::string name = s_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposite(double amount);
    // inherits withdraw from the account class 

    ~Saving();
};