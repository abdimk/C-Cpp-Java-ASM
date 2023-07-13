#include <iostream>
#include <stdlib.h>
#include <string>

using std::cout,std::cin,std::endl;

class Player{
    // atributes
public:
    std::string name {"player"};
    int health{0};
    int xp{3};

    // methods
    void talk(std::string word){cout<<name<<" says "<<word<<endl;}
    bool is_dead();//
};

class Account{
    // atributes 
    std::string name{"Account"};
    int balance{0};

    //methiods
    bool withdraw(double bal){balance+=bal;cout<<"Inbalance "<<endl;}
    bool deposite(double){balance+=bal;cout<<"Indeposite "<<endl;}
};

int main()
{
    Player hero;
    Player frank;

    Player* enemy = (Player *)malloc(sizeof(Player));
    enemy->name = "abdisa";
    enemy->talk("Here There!");
    cout<<(enemy->name)<<endl;
    return 0;
}