#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string n){
        name = n;
    }
    

    //Overloaded Constractors
    Player(){
        cout<<"No args constractor called"<<endl;
    }
    Player(std::string name){
        cout<<"String args constractor called"<<endl;
    }
    Player(std::string name , int xp, int health){
        cout<<"String args, xp, health constractors called"<<endl;
    }
    ~Player(){
        cout<<"Destractors are called for: "<<name<<endl;
    }

};

int main(){

    {
        Player slayer;
        slayer.set_name("Slayer");
    }


    return 0;
}