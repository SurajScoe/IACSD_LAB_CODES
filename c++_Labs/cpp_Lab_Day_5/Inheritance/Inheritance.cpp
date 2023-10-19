#include<iostream>
using namespace std;

class Employee{
    /*DMs*/
    private:
    int empid; /*auto increament*/
    string name; /*visible to only in this class*/
    protected:
    double salary; /*visible only in child class*/

    /*MFs*/
    public:
    /*Defualt Constructor*/
    Employee(){cout<<"Inside paramaterized constructor !!"<<endl;
}
    /*Parameterized Constructor*/
    Employee(int empid, string name,double salary)
    {
        cout<<"Inside paramaterized constructor !!"<<endl;
        this->empid = empid;
        this->name = name;
        this->salary = salary;
    }

    void displayDetails()
    {
        cout<<empid<<" "<<name<<" "<<salary<<endl;
    }

    void calSal(){
        cout<<"Employee Salary"<<salary<<endl;
    }
};

class Manager:public Employee
{
private:
    /* data */
    string deptname;
    double incentives;
public:
    Manager(/* args */);
    ~Manager();

    /* // Constructor initialization list to initialize data members*/
    Manager(int empid, string name, double salary, string deptName):Employee(empid,name,salary)
    {
        this->incentives=10000;
        this->deptname=deptName;
    }

    void display(){
        Employee::displayDetails(); // Call the base class's Display function
    }

    /*Child class hides method of parent class
    Overriding : same func name with same signatures*/

    void calSal()
    {
        cout<<"Manager's Salary : "<<this->salary+this->incentives<<endl;
    }
};


class Admin :public Employee{
    public :
    void calSal(){
    cout<<"Admin Salary : "<<this->salary+5000<<endl;}
};


int main()
{

}