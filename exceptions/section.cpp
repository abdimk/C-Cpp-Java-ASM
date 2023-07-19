#include <iostream>
#include <string>


double calculate_mpg(int &sum , int &total){
    if(total == 0){throw 0;}
    if (sum < 0 || total < 0) {throw -1;}
    return static_cast<double> (sum) / total;
}


int main()
{
    int gallaon{};
    int miles{};
    double miles_per_gallon{};

    std::cout<<"Miles:";
    std::cin>>miles;
    std::cout<<"Gallaon:";
    std::cin>>gallaon;
    try{
        if(gallaon == 0)
            throw 0;
        miles_per_gallon = static_cast<double> (miles) / gallaon;
        std::cout<<miles_per_gallon<<std::endl;
    }catch(int &ex){
        std::cerr<<"Sorry! You can't divide by zero"<<std::endl;
    }
    catch(std::string &ex){
        std::cerr<<ex<<std::endl;
    }
    
    return 0;
}