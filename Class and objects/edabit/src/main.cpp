#include <iostream>
#include "Saving.hpp"

using std::cout, std::endl;

int main() {
    cout<<"\n==========Account Class=============="<<endl;
    Account a1{"abdisa",1000};
    a1.show_balance();
    return 0;
}