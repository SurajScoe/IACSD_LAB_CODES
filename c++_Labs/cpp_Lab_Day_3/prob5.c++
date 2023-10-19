/*4. Create a class Point with data members as x,y. Add AcceptPoint and  add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Point
{
private:
    /* data */
    int x, y;
public:
    // Point(/* args */);
    // ~Point();

    void Accept_func(){
        cout<<"Enter the value of x : "<<endl;
        cin>>x;
        cout<<"Enter the value of y : "<<endl;
        cin>>y;
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
    p.Accept_func();
    p.Display_func();
    return 0;
}