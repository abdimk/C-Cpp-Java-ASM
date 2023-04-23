/*
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double merged(vector <int> &num1, vector <int> &num2){
    for(int i{0}; i < num2.size(); i++){
        num1.push_back(num2[i]);
    }

    // sort num1
    int temp;
    for(int i{0}; i < num1.size(); i++){
        for(int j{i + 1}; j < num1.size(); j++){
            if(num1[i] > num1[j]){
                temp = num1[i];
                num1[i] = num1[j];
                num1[j] = temp;
            }
        }
    }

    // return the sorted num1

    for(auto x: num1){
        //cout<<x<<" ";
    }

    //cout<<"\n";

    double len;
    // if the number is odd
    if(num1.size() % 2 !=0){
        len = num1.size() / 2.0;
        //cout<<setprecision(4)<<num1[len]<<endl;
        return num1[len];

    }else{
        int left = num1.size();
        int right{0};
        for(int i{0}; i < num1.size(); i++){
            right++;
            left--;
            if(right == left){
                len = num1[right] / num1[left - 1]; 
                //cout<<num1[right]<<endl;
                //out<<num1[left - 1]<<endl;
                break;
            }
        }

        

        return len;

    }

    return 0.0;

}



//void findMedianSortedArray(vector <int> &num1, vector <int> &num2){   
//}

int main(){
    vector <int> a{1,2};
    vector <int> b{3,4};

    double ans = merged(a, b);
    cout<<ans<<endl;
    return 0;
}