/*Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry.
*/

#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void Area() = 0;
    virtual void Perimeter() = 0;
};

class Circle:public Shape{
    private:
    double r;
    public:
    Circle(double r):r(r){};
    void Area(){
        cout<<" Area of Circle is : "<<r*r<<endl;
    }
    void Perimeter(){
        cout<<" Perimeter of Circle is :"<<2*3.14*r<<endl;
    }
};
class Rectangle:public Shape{
    private:
    double l;
    double b;
    public:
    Rectangle(double l, double b):l(l),b(b){}
    void Area(){
        cout<<" Area of Circle is : "<<l*b<<endl;
    }
    void Perimeter(){
        cout<<" Perimeter of Circle is :"<<2*(l+b)<<endl;
    }
};
class Triangle:public Shape{
    private:
    double a;
    double b;
    double c;
    double h;
    public:
    Triangle(double a, double b, double c, double h):a(a),b(b),c(c),h(h){}
    void Area(){
        cout<<" Area of Circle is : "<<0.5*b*h<<endl;
    }
    void Perimeter(){
        cout<<" Perimeter of Circle is :"<<a+b+c<<endl;
    }
};

int main()
{
    Circle c(2);
    Rectangle r(3,4);
    Triangle t(5,6,7,10);

    c.Area();
    c.Perimeter();

    r.Area();
    r.Perimeter();

    t.Area();
    t.Perimeter();

}