/*4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Point
{
private:
    /* data */
    int x, y;
public:
    Point(/* args */){
        x = 1;
        y = 2;
    };
    // ~Point();

    Point(int x , int y)
    {
        this->x = x;
        this->y = y;
    }

    void set_PointX(int x){
        this->x = x;
    }
    void set_PointY(int x){
        this->y = y;
    }

    int get_Pointx()
    {
        return x;
    }

    int get_Pointy()
    {
        return y;
    }
    void Display_func(){
        cout<<"value of x is "<<x<<endl;
        cout<<"value of y is "<<y<<endl;
    }
};

// Point::Point(/* args */)
// {
// }

// Point::~Point()
// {
// }

int main()
{
    Point p;
    p.Display_func();

    Point p2(9,8);
    p2.Display_func();
    Point p1;
    p1.set_PointX(3);
    p1.set_PointY(4);

    cout<<p1.get_Pointx()<<endl;
    cout<<p1.get_Pointy()<<endl;


    return 0;
}