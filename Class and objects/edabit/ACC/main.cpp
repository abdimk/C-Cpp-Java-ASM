#include <iostream>
#include "Account.h"
#include "Saving.h"

int main()
{
   Account* myaccount = new Account;
   myaccount->deposite(10000);
   myaccount->deposite(10000);
   myaccount->deposite(10000);
   myaccount->get_balance();

   Saving* mysaving = new Saving;
   mysaving->saving_deposite(4000);
   mysaving->get_balance();

   delete mysaving;
   delete myaccount;
    return 0;
}