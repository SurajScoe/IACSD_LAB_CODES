/*2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 
*/

#include<iostream>
using namespace std;
class Date
{
private:
    /* data */
    int dd, mm, yy;
public:
    Date(/* args */){
        cout<<"Inside the Default constructor !!"<<endl;
        dd = 27;
        mm = 6;
        yy = 2023;
    }

    Date(int dd, int mm, int yy){
        cout<<"\nInside the Parameterized constructor !!"<<endl;
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    // ~Date();

    void set_day(int dd){
        this->dd = dd;
    }
   
    void set_month(int mm){
        this->mm = mm;
    }
   
    void set_year(int yy){
        this->yy = yy;
    }



    int get_day(){
        return dd;
    }
   
    int get_month(){
        return mm;
    }
   
    int get_year(){
        return yy;
    }
   

    void display(){
        cout<<"\nThe Date is "<<dd<<"-"<<mm<<"-"<<yy<<endl;
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
    d.display();
    Date d1(9,12,2023);
    d1.display();
    Date d2;
    d2.set_day(15);
    d2.set_month(8);
    d2.set_year(1947);

    cout<<"The modified date is "<<d2.get_day()<<"/"<<d2.get_month()<<"/"<<d2.get_year()<<endl;
    return 0;
}