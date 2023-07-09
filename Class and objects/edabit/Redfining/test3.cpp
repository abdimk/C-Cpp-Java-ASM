#include <iostream>
#include <iomanip>

using namespace std;

std::string maskify(std::string str) {
    //int count = 0;    
    for(int i = str.size(); i > (str.size() - 5); i--){
        str[i]='#';
       // i++;
        
    }  

    cout<<str<<endl;
    return " ";
}

int main()
{
    maskify(" ");
    return 0;
}