#include <iostream>
#include <string>
#include <map>


using std::cout,std::endl;

class Counter
{
public:
    Counter(std::string word){
        std::map<std::string,int>count;
        for(int i = 0; i < word.size(); i++){count[std::to_string(word[i])] = 1;}
        for(int i = 0; i < word.size();i++){
            for(int j = i + 1; j < word.size();j++){
                if(word[i] == word[j])
                    count[std::to_string(word[i])]++;
            }
        }

        cout<<word<<endl;
        for(int i = 0; i < word.size();i++){
            cout<<word[i]<<" :"<<count[std::to_string(word[i])]<<" ";
        }
        cout<<endl;

    }
};



int main()
{
    Counter w1 = {"hello"};
    return 0; 
}