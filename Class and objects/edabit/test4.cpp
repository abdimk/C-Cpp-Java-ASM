#include <iostream>


class Base
{
private:
    int value;
public:
    Base(){std::cout<<"Base No args constrcator invoced"<<std::endl;}
    Base(int x):value{x}{std::cout<<"Base(int) constractor invoced"<<std::endl;}

    // copy constructor
    Base(const Base&other):value{other.value}{
        std::cout<<"Base constructor invoced"<<std::endl;
    }

    // operator overloading 
    Base &operator=(const Base &rhs){
        std::cout<<"Base operator ="<<std::endl;
        if(this==&rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
   // ~Base(){std::cout<<"Distructor for the Base  class has been called"<<std::endl;}
   
};

class Derived:public Base
{
private:
    int double_value;
public:
    Derived():Base{},double_value{0}{std::cout<<"Derived No args constracor invoced"<<std::endl;}
    Derived(int x):Base{x},double_value{x}{std::cout<<"Derived(double) constracor invoced"<<std::endl;}

    Derived(const Derived&other):Base{other},double_value{other.double_value}{
        std::cout<<"Drived copy constructor"<<std::endl;
    }

    Derived &operator=(const Derived&rhs){
        std::cout<<"Drived operator ="<<std::endl;
        if(this == &rhs)
            return *this;
        Base::operator=(rhs);
        double_value = rhs.double_value;
        return *this;
    }
};

int main()
{

    Base b1;
    Base b2{b1}; // copy constructor
    b1 = b2; // copy assignment

    
    return 0;
}
