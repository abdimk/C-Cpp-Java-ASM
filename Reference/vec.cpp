#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> stooges{"larry","mosses","maria"};

    for(auto &ref: stooges){
        ref = "hello";
    }

    for(auto &ref : stooges){
        cout<<ref<<endl;
    }
    return 0;
}