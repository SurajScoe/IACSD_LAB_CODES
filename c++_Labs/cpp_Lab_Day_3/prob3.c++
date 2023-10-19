/*2. Create a class Date with data members as dd, mm, yy. Create AcceptDate function. Also add the display function. Create the 
object of this class in main method and invoke all the methods in that class. */
#include<iostream>
using namespace std;
class Date
{
private:
    /* data */
    int dd, mm, yy;
public:
    // Date(/* args */);
    // ~Date();
    void accept_data(){
        cout<<"Enter the day : "<<endl;
        cin>>dd;
        cout<<"Enter the month : "<<endl;
        cin>>mm;
        cout<<"Enter the year : "<<endl;
        cin>>yy;
    }

    void display(){
        cout<<"The Date is "<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
};

// Date::Date(/* args */)
// {
// }

// Date::~Date()
// {
// }

int main()
{
    Date d;
    d.accept_data();
    d.display();
    return 0;
}