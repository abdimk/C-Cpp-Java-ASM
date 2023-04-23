#include <iostream>

using namespace std;

class AbstractionEmployee{
    virtual void AskForPromotion()=0;
};
class Employee:AbstractionEmployee {
private:
    string Name;
    string Company;
    int Age;
public:
    // for Name
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }

    // for Company
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }

    // for Age

    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if(Age > 30){
            cout<<Name<<" got promoted !"<<endl;
        }
        else
            cout<<Name<<", sorry No promotion for you!"<<endl;
    }
    void person(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl;

    }
};

class Developer : Employee{
public:
    string FavProgramminglanguage;
    Developer(string name,string company,int age, string favProgramminglanguage) 
        :Employee(name,company,age)
    {
        FavProgramminglanguage = favProgramminglanguage;
    }
};
int main(){
    Employee employee1 = Employee("Abdisa", "NZXT", 20);
    Employee employee2 = Employee("Netkas", "Amazon", 35);

    Developer d = Developer("Zi xang Netkas", "Amazon", 35, "Javascipt");

}