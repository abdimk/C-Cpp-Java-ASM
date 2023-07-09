#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void tweakLetters(char *str, int s1, int *arr){
    for(int i = 0; i < s1; i++){
        switch (arr[i])
        {
            case 0: cout<<str[i]<<" ";
                break;
            case -1:cout<<char(int(str[i]) - 1)<<" ";
                break;
            case 1: cout<<char(int(str[i]) + 1)<<" ";
                break;
        }
    }
    cout<<endl;

}
int main()
{
    char words[6] = "apple";
    int s = sizeof(words) / sizeof(words[0]);
    int array[] = {0, 1, -1, 0, -1};
    tweakLetters(words,s,array);
    return 0;
}

/*
if(arr[i] == 0 && i <= s2){
            cout<<arr[i]<<" ";
            j++;
        }else if(arr[i] == 1 && i <= s2){
            cout<<int(arr[i])<<" ";
            j++;
        }else if(arr[i] == -1 && i <= s2){
            cout<<int(arr[i])<<" ";
            j++;
        }
*/