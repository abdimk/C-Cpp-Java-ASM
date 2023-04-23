#include <iostream>

using namespace std;

class Calculator{
public:
    int num1,num2;
    Calculator(int a, int b){
        num1 = a;
        num2 = b;
    }
    void add(){
        cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
    }
    void sub(){
        cout<<num1<<" - "<<num2<<" = "<<(num1 - num2)<<endl;
    }
    void mult(){
        cout<<num1<<" * "<<num2<<" = "<<(num1*num2)<<endl;
    }
    void div(){
        cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
    }
};

int main()
{
    Calculator user1 = Calculator(5,3);
    user1.add();
    user1.sub();
    user1.mult();
    user1.div();
}