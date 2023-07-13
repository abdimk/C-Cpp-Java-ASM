#include <iostream>
#include <cstring>
using std::cout,std::cin,std::endl;

class Students{
public:
    char name[10];
    int age;
    int rigestration_date; 
};

int main(){
    Students work1;
    
    work1.age = 21;
    work1.rigestration_date = 124322;
    return 0;
}