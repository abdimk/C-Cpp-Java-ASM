#include <iostream>

using namespace std;

int main(){
    int user_data;
    char op;
    while(true){
        for(int i{0}; i <= 20; i++){
            cout<<"* ";
        }
        cout<<"\n";
        cout<<"Press 1 to convert Fahrenhiet to Celsius\n";
        cout<<"Press 2 to convert Celsius to Fahrenhit\n";
        cout<<"\n";
        for(int i{0}; i <= 20; i++){
            cout<<"* ";
        }
        cout<<"\nEnter the operation:";
        cin>>op;
        switch(op){
            case '1':cout<<"Enter the temprature in Fahrenhiet:";
                cin>>user_data;
                float c;
                c = (user_data - 32) * 5/9;
                cout<<user_data<<" F"<<"in to C:"<<c<<"\n\n";
                break;
            case '2':cout<<"Enter the temprature in Celsius: ";
                cin>>user_data;
                float f;
                f = (c * (9/5)) + 32;
                cout<<user_data<<" C"<<"in to F:"<<f<<"\n\n";
                break;
            default:cout<<"invalid operator\n";

        }
    }
    
}