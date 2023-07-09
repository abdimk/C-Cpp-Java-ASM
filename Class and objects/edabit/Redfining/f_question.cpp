#include <iostream>

class Date
{
public:
    int day,month,year;
    Date(int day,int month,int year):day{0},month{0},year{0}{
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void show_date(){
        std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
    }

};


void calculate_gap(const Date &ob1, const Date &ob2){
    long long int d1_total_days = ob1.day + (30 * (ob1.month)) + (365*(ob1.year));
    long long int d2_total_days = ob2.day + (30 * (ob2.month)) + (365*(ob2.year));
    int gap = d2_total_days - d1_total_days;

    std::cout<<"The gap is: "<<gap<<" days"<<std::endl;
}
int main() {
    Date d1{11,7,2023},d2{21,4,2024};
    d1.show_date();
    d2.show_date();
    calculate_gap(d1,d2);
    return 0;
}