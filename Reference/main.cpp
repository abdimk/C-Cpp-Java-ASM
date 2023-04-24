#include <iostream>

using namespace std;


enum Days:char
{
    A='M',B='T',C='W',D='T',E='F'
};

int main()
{
    char ch;
    int *car_ptr{&ch};
    cout<<"Enter the starting date:";
    cin>>*car_ptr;
    
    Days value = B;
    if(value == (*car_ptr)){
        cout<<"Hello world, its Tuesday"<<endl;
    }
    
    return 0;
}