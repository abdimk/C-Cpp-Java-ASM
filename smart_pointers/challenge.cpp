#include <iostream>
#include <memory>
#include <vector>



class Test
{
private:
    int data;
public:
    Test():data{0}{std::cout<<"\tTest Constructor ("<<data<<")"<<std::endl;}
    Test(int data):data{data}{std::cout<<"\tTest Constructor ("<<data<<")"<<std::endl;}
    int get_data() const {return data;}
    ~Test(){std::cout<<"\tTest Distructor ("<<data<<")"<<std::endl;}
};

// function prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout<<"How many data pointes do you want to enter:";
    int num;
    std::cin>>num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make(){
    auto vec = std::make_unique<std::vector<std::shared_ptr<Test>>>();
    return vec;
}
void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
    
    int user_data;
    for(int i = 0; i < num; i++){
        std::cout<<"Enter data point ["<<i<<"]:";
        std::cin>>user_data;
        vec.push_back(std::make_shared<Test>(user_data));
    }
    
}

void display(const std::vector<std::shared_ptr<Test>> &vec){
    std::cout<<"\nDisplaying vector data"<<std::endl;
    std::cout<<"=============================="<<std::endl;
    for(const auto x : vec){
        std::cout<<(*x).get_data()<<std::endl;
    }
    std::cout<<"=============================="<<std::endl;
}
