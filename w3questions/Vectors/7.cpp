#include <iostream>

using namespace std;

class Entity{

public:
    int x;
    int y;

    Entity(int x, int y){
        this->x = x;
        this->y = y;
    }

    void get_item(){
        cout<<x<<" "<<y<<endl;
    }
};


int main(){
    Entity use = Entity(3,7);
    use.get_item();

    return 0;
}