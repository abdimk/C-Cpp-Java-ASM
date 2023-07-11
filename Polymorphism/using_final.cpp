#include <iostream>


class Base
{
public:
    virtual void say_hello() const 
    {
        std::cout<<"Hello - I'am from base"<<std::endl;
    }

    virtual ~Base(){}
};

class Derived:public Base
{
public:
    virtual void say_hello() const override 
    {
        std::cout<<"Hola - I'am from derived"<<std::endl;
    }
    virtual ~Derived(){}
};

void greeting(Base &obj)
{
    std::cout<<"Greetings"<<std::endl;
    obj.say_hello();
}

int main()
{
    Base b;
    greeting(b);

    Derived d;
    greeting(d);
    return 0;
}

