/*5. Create a class ComplexNumber with data members real, imaginary. Create  AcceptComplexNumber() and the display function. Create the object of this class in main method and invoke all the methods in that class.*/

#include<iostream>
using namespace std;
class ComplexNumber
{
private:
    /* data */
    double real;
    double img;
public:
    // ComplexNumber(/* args */);
    // ~ComplexNumber();
    void AcceptComplexNumber(){
        cout<<"Enter the Real Number : "<<endl;
        cin>>real;
        cout<<"Enter the Imaginary Number : "<<endl;
        cin>>img;
    }

    void display()
    {
        cout<<real;
        if(img>=0){
            cout<<" + "<<img<<"i"<<endl;
        }
        else{
            cout<<"- "<<img<<"i"<<endl;
        }
    }
};

// ComplexNumber::ComplexNumber(/* args */)
// {
// }

// ComplexNumber::~ComplexNumber()
// {
// }

int main()
{
    ComplexNumber cn;
    cn.AcceptComplexNumber();
    cn.display();
    return 0;
}