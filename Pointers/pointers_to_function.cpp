#include <iostream>
#include <vector>

using namespace std;

void display_with(int *array, int senetinal){
    while((*array) != senetinal){
        cout<<*array++<<endl;
    }
}

int main(){

    //vector <string> names{"mewew","mona","larson"};
    int scores [] {10,20,30,40,-1,70};
    display_with(scores, -1);
    return 0;
}
