#include <iostream>
#include <vector>

using namespace std;

int iterate_digit(int num){
    int count = 0;
    std::string strNumber = std::to_string(num);
    for(char digit:strNumber) count++;
    return count;
}

// numberLenSort([999, 421, 22, 990, 32]) ➞ [22, 32, 999, 421, 990]
std::vector<int> numberLenSort(std::vector<int> arr) {
    for(int i = 0; i < arr.size();i++){
        for(int j = i + 1; j < arr.size();j++){
            if(iterate_digit(arr[i]) > iterate_digit(arr[j])){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

int main()
{
    for(auto x:numberLenSort(vector<int>{999, 421, 22, 990, 32})){
        cout<<x<<" ";
    }
    cout<<endl;   
    return 0;
}