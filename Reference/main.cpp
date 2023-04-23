#include <iostream>

using namespace std;

int main()
{
    int num{200};
    int &ref{num};

    cout<<"------------------------"<<endl;
    cout<<num<<endl;
    cout<<ref<<endl;
    //both are the same

    cout<<"-------------------------"<<endl;

    ref = 400;

    //the values will change 
    cout<<ref<<endl;
    cout<<num<<endl;
    return 0;
}