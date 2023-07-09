#include <iostream>

class Base
{
public:
    virtual void say_hello() const {
        std::cout<<"Hello, I'am Base class Object"<<std::endl;
    }
    virtual ~Base(){}
};

class Derived:public Base
{
public:
    virtual void say_hello() const override{
        std::cout<<"Hello, I'am Derived object"<<std::endl;
    }

    virtual ~Derived(){}

};

int main()
{
    Base* ptr = new Base();
    ptr->say_hello();


    Base* ptr2 = new Derived();
    ptr2-> say_hello();



    delete ptr;
    delete ptr2;
    return 0;
}