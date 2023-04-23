#include <iostream>
#include <vector>


using namespace std;

void r_type(){
    //vector <int> vec1{1, 2 ,5, 7, 4, 3, 6};
    vector <int> vec1{1, 2 ,5, 0, 3, 6, 7};
    int temp;


    // before sorted
    cout<<"[";
    for(auto x: vec1){
        cout<<x<<" ";
    }
    cout<<"]"<<endl;

    // sorted 
    for(int i{0}; i < vec1.size(); i++){
        for(int j{i + 1}; j < vec1.size(); j++){
            
            if(vec1[i] > vec1[j]){
                temp = vec1[i];
                vec1[i] = vec1[j];
                vec1[j] = temp;
            } 
        }
    }

    // after


    cout<<"\n";

    cout<<"[";
    for(auto x: vec1){
        cout<<x<<" ";
    }
    cout<<"]"<<endl;

    const int mynum = vec1[0];
    bool is_contiuned = false;

    for(int i{0}; i < vec1.size(); i++){
        for(int j{i+1}; j < i + 2; j++){
            if(vec1[i+1]!=0){
                if(mynum + vec1[i] == vec1[i+1]){
                    is_contiuned = true;
                }
                break;
            }

        }

        
    }
    cout<<is_contiuned<<endl;



}
int main(){
    cout<<boolalpha;
    r_type();
    return 0;
}