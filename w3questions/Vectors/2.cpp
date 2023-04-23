/*
Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.

Sample Data:
({7, 2 ,5, 3, 1, 5, 6}) -> 2, 1
({1, 2 ,5, 0, 3, 1, 7}) -> 0, 1
*/

#include <iostream>
#include <vector>

using namespace std;


void r_type(){
    //vector <int> nums {7, 2 ,5, 3, 1, 5, 6};
    vector <int> nums {1, 2 ,5, 0, 3, 1, 7};
    int right{1};
    int left{-1};
    int i=0;
    while(i < nums.size()){
        if(nums[i+left] > nums[i] && nums[i+right] > nums[i]){
            cout<<nums[i]<<" ";
        }
        i++;
    }
    
}

int main(){
    r_type();
    return 0;
}