#include <iostream>

using namespace std;

int main()
{
    int high_score{100};
    int low_score{40};

    /*

    int *const int_ptr{&high_score};

     *int_ptr = 50;        // OK
     int_ptr = &low_score; // Error
     cout<<*int_ptr<<endl;
     */

    const int *int_ptr{&high_score};

    // *int_ptr = 60; Error
    int_ptr = &low_score; // Ok

    cout<<*int_ptr<<endl;

    return 0;
}
