#include <iostream>

using namespace std;

int main(){
    int user_defined_limit;
    int i,sum,product{1};
    char op;
    do{
        cout<<"Enter the defined limit:";
        cin>>user_defined_limit;
        //sum of even integer
        for(int i{2}; i < user_defined_limit; i++){
            if(i % 2 == 0){
                sum+=i;
                
            }
        }
        

        //product of the odd integer
        for(int i{1}; i < user_defined_limit; i++){
            if(i % 2 != 0){
                product*=i;
                
            }
        }
        
        cout<<"sum of even integers:"<<sum<<"\n";
        cout<<"product of odd integers:"<<product<<"\n\n\n";
        cout<<"press Q or q to terminate and c to continue:";
        cin>>op;
        if(op=='Q'||op=='q'){
            break;
        }     
        else if(op=='c')
            continue;
    }while(op !='Q' || op != 'q');
}