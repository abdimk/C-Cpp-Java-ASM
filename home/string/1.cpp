#include <iostream>
#include <string>

using namespace std;

int main(){
    std::string word {"namespace"};
    std::string tem_str = word;
    int index_pos = 0;
    for(int i = word.length() - 1 ; i >=0; i--){
        word[index_pos] = tem_str[i];
        index_pos++;
    }

    cout<<word<<endl;
}