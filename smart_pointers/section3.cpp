// shared pointer

// unique_pointer => provides unique ownership to a heap object
//RAII
// shared_pointer => provides shared ownership to a heap obejct
#include <iostream>
#include <memory>


class Test
{
public:
    Test(){
        std::cout<<"Test class with no args"<<std::endl;
    }
    Test(int amount){
        std::cout<<"Test class with a :"<<amount<<std::endl;
    }
};

void func(std::shared_ptr<Test> p){
    std::cout<<"Use count: "<<p.use_count()<<std::endl;
}

int main()
{
    // use_count
    //std::shared_ptr<int> p1 {new int {100}};
    //std::cout<<p1<<std::endl;
    //p1.use_count();

    //std::shared_ptr<int> p2 {p1};
    // std::shared_ptr<int> p2 = std::make_shared<int>();
    // p2 = p1;
    // std::cout<<p2<<std::endl;
    // std::cout<<p2.use_count()<<std::endl;

    // *p2 = 400;

    // std::cout<<*p1<<std::endl;
    //std::shared_ptr<int> p1 = std::make_shared<int>(100);
    //std::cout<<"Use count: "<<p1.use_count()<<std::endl;

    //std::shared_ptr<int> p2{p1};
    //std::cout<<"Use count: "<<p2.use_count()<<std::endl;

    // p1.reset(); // dealocate p1 from the heap 

    // std::cout<<"Use count: "<<p2.use_count()<<std::endl;

    std::shared_ptr<Test> p1 = std::make_unique<Test>(100);
    func(p1);
    std::cout<<p1.use_count()<<std::endl;

    




    return 0;
}
