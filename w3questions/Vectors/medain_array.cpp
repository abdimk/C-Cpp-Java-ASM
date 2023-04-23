/*
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double findMedianSortedArray(vector <int> &vec1, vector <int> &vec2);

int main(){
    vector <int> a{1,2};
    vector <int> b{3};

    cout<<findMedianSortedArray(a,b)<<endl;


    return 0;
}

double findMedianSortedArray(vector <int> &vec1, vector <int> &vec2){
    //add the second vector to the first vector
    for(int i{0}; i < vec2.size(); i++){
        vec1.push_back(vec2[i]);
    }

    //sort the array
    int temp;
    for(int i{0}; i < vec1.size(); i++){
        for(int j{i + 1}; j < vec1.size(); j++){
            if(vec1[i] > vec1[j]){
                temp = vec1[i];
                vec1[i] = vec1[j];
                vec1[j] = temp;
            }
        }
    }

    int len;
    // return the medain
    if(vec1.size() % 2 != 0){
        len = vec1.size() / 2;
        cout<<fixed<<setprecision(5);
        //cout<<vec1[len]<<endl; //cout 

        return vec1[len];

        
    }else{
        double left = vec1.size();
        double right{0};
        double med{0.0};
        for(int i{0}; i < vec1.size(); i++){
            right++;
            left--;
            if(right == left){

                med = (vec1[right] + vec1[left - 1]) / 2.0;
                //cout<<vec1[right]<<endl;
                //cout<<vec1[left - 1]<<endl;
                //cout<<med<<endl;
                break;
            }
        }
        cout<<fixed<<setprecision(5);
        return med;

    }


    return 0.0;
}