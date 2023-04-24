#include <iostream>

using namespace std;


enum Days: char
{
    A='M',B='T',C='W',D='T',E='F'
};

void Warn(const char* message){
    cout<<message<<endl;
}

int main()
{
    Warn("Hello");
    return 0;
}