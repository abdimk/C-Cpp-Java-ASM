#include <iostream>
#include <vector>

class Shape // abstract base class 
{
public:
    virtual void draw() = 0; // pure virtual functions 
    virtual void rotate() = 0;
    virtual ~Shape(){}
};

class Open_Shape:public Shape
{
public:
    virtual ~Open_Shape(){}
};

class Closed_Shape:public Shape
{
public:
    virtual ~Closed_Shape(){}
};

class Line:public Open_Shape
{
    virtual void draw() override {
        std::cout<<"Drawing a line"<<std::endl;
    }

    virtual void rotate() override {
        std::cout<<"Rotating line"<<std::endl;
    }


    virtual ~Line(){}
};

class Circle: public Closed_Shape{
public:
    virtual void draw() override {
        std::cout<<"Drawing a circle"<<std::endl;
    }
    virtual void rotate() override {
        std::cout<<"Rotating a circle"<<std::endl;
    }
    virtual ~Circle(){}
};

class Square: public Closed_Shape{
public:
    virtual void draw() override {
        std::cout<<"Drawing a Square"<<std::endl;
    }
    virtual void rotate() override {
        std::cout<<"Rotating a Square"<<std::endl;
    }
    virtual ~Square(){}
};




void refresh_screen(const std::vector<Shape * > &shapes){
    std::cout<<"Refreshing"<<std::endl;
    for(const auto x : shapes)
        x->draw();
}
int main()
{


    // Base class pointer
    Shape* ptr1 = new Line();
    Shape* ptr2 = new Circle();
    Shape* ptr3 = new Square();
    
    std::vector<Shape * > shapes {ptr1,ptr2,ptr3};
    refresh_screen(shapes); 
    
    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;
}

