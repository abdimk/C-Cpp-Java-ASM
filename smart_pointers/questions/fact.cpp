#include <iostream>
#include <memory>


int main()
{
    int arry[] = {4,5,6,7,3,2};
    //std::shared_ptr<int> p1{new int []};
    std::shared_ptr<int> p1 {new int [10]};

    std::cout<<(*p1)[0]std::endl;
    return 0;
}