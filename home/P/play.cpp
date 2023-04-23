#include <iostream>
#include <string>

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int heal_val, int xp_val);
};

Player::Player():name{"None"},health{0},xp{0}{
    std::cout<<"This no args constractor has been called"<<std::endl;
}

Player::Player(std::string name_val):name{name_val},health{0},xp{0}{
    std::cout<<"The name args constractor has been called"<<std::endl;
}

Player::Player(std::string name_val, int heal_val, int xp_val):name{name_val},health{heal_val},xp{xp_val}{
    std::cout<<"The three args constractor has been called"<<std::endl;
}

int main(){
    Player abdisa;
    Player merga{"Merga"};
    
    Player lisa{"lisa", 80, 100};
    return 0;
}