/*
letterCounter([
  ["D", "E", "Y", "H", "A", "D"],
  ["C", "B", "Z", "Y", "J", "K"],
  ["D", "B", "C", "A", "M", "N"],
  ["F", "G", "G", "R", "S", "R"],
  ["V", "X", "H", "A", "S", "S"]
], "D") ➞ 3
*/

#include <iostream>
#include <vector>


using namespace std;


int main()
{
    vector<vector<char>> car{
        {'a','b','c','d'},
        {'e','f','g','h'}
    };

    int size = sizeof(car) / sizeof(car[0]);
    cout<<sizeof(car[0])<<endl;
    cout<<car.size()<<endl;
    
    return 0;
}