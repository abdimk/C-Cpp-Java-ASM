// resorce aquestion is initalization

#include <memory>
#include <iostream>



class Test
{
private:
    double balance;
public:
    Test(){std::cout<<"Constructor for test class"<<std::endl;}
    Test(double bal):balance{bal}{std::cout<<"balance(double) one arg constractor"<<std::endl;}
    ~Test(){std::cout<<"Distructor for test class"<<std::endl;}
    
};
int main()
{

    //std::unique_ptr<int> ptr{new int{100}};
    //std::cout<<*ptr<<std::endl;

    //std::unique_ptr<int> p1 = std::make_unique<int>(100);
    //std::cout<<*p1<<std::endl;

    //auto p = std::make_unique<int>(20);
    //std::cout<<*p<<std::endl;
    //Test* t_ptr = new Test(); // raw pointer

    //delete t_ptr;

    //std::unique_ptr<Test> t_ptr{new Test()};


    //std::unique_ptr<Test> t_ptr = std::make_unique<Test>();
    auto t_ptr = std::make_unique<Test>();
    return 0;
}