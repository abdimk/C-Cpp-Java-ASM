#include <iostream>

using namespace std;

int main()
{
    size_t size{0};
    double *temp_ptr{nullptr};
    int my_count{0};

    cout<<"Enter the number of temps:";
    cin>>size;

    temp_ptr = new double[size];

    for(int i=0; i < size; i++){
        cout<<"Enter the "<< i<<" value:";
        cin>>my_count;
        temp_ptr[i] = my_count;

    }
    for(int i=0; i < size; i++){
        cout<<temp_ptr[i];
        cout<<" ";
    }
    cout<<endl;

    delete [] temp_ptr;
    return 0;
}

