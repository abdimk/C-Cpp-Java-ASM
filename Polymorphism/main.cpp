// polymorphism
/*
compile-time/eary binding / static binding 
Run-time / late binding /dynamic binding

*/

#include <iostream>

class Base
{
public:
    void say_hello() const {
        std::cout<<"Hello - I'm Base object"<<std::endl;
    }
};

class Derived:public Base 
{
public:
    void say_hello() const {
        std::cout<<"Hello - I'm Derived object"<<std::endl;
    }
};


void greeting(const Base &obj)
{
    std::cout<<"Greetings: ";
    obj.say_hello();
}

int main()
{
    
    Base b1;
    b1.say_hello();


    Derived d1;
    d1.say_hello();

    greeting(b1);
    greeting(d1);


    Base* ptr = new Derived;
    ptr->say_hello();

    // this is hapning because c++ is using static binding by default 
    return 0;
}