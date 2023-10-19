/*3:Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.
*/

#include<iostream>
using namespace std;

class Shape
{
private:
    /* data */
public:
    virtual void area() = 0;
};

class Rectangle:public Shape{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int length,int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    void area(){
        cout<<"Area of Triangle : "<<length*breadth<<endl;
    }

};
class Circle:public Shape{
    private:
    int r;
    public:
    Circle(int r){
        this->r = r;
    }
    void area(){
        cout<<"Area of Circle : "<<3.14*r*r<<endl;
    }

};
class Sqaure:public Shape{
    private:
    int side;
    public:
    Sqaure(int side){
        this->side = side;
    }
    void area(){
        cout<<"Area of Sqaure : "<<side*side;
    }

};


int main()
{
    Shape *s = new Rectangle(2,3);
    s->area();
    s = new Circle(3);
    s->area();
    s = new Sqaure(2);
    s->area();

    return 1;
}