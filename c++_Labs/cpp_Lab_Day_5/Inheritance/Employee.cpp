/*Employee Inheritance:
Problem Statement: Build a system for managing employees. Create a base class Employee with attributes such as name, employee ID, and salary. Then, derive classes like Manager and Developer, each with its own attributes and methods. Implement a common method, like calculate_salary(), in the base class.
*/

#include<iostream>
#include<typeinfo>
using namespace std;
class Employee
{
// private:
protected:
    /* data */
    string name;
    int id;
    double salary;
public:
    Employee(string name, int id, double salary):name(name),id(id),salary(salary){};
    // ~Employee();

    //
    virtual void CalSalary(){
        cout<<salary<<endl;
    };    
};

class Manager:public Employee{
    private:
    double ManagerBonus;
    public:
    Manager(string name, int id, double salary, double bonus):Employee(name,id,salary),ManagerBonus(bonus){};

    void CalSalary(){
        cout<<"Salary of Manager is "<<salary+ManagerBonus<<endl;
    }

    void ManagerInsentives(){
        cout<<"Manager Incentives !!"<<endl;
    }
};

class Developer:public Employee{
    private:
    double DevBonus;
    public:
    Developer(string name, int id, double salary, double bonus):Employee(name,id,salary),DevBonus(bonus){};

    void CalSalary(){
        cout<<"Salary of Manager is "<<salary+DevBonus<<endl;
    }

    void DevIncetives(){
        cout<<"Developer Incentives"<<endl;
    }
};

int main(){


    /*Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting*/
    // Employee *e;
    // Manager m("suraj",101,10000,1000);

    // e = &m;

    // // Virtual function, binded at runtime
    // e->CalSalary();

    // Developer d("ravi",202,50000,5000);

    // e = &d;

    // e->CalSalary();


    /* Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting.*/


    Employee *arr[3];
    Employee emp("suraj",101,100000);
    Manager m("ravish",202,50000,5000);
    Developer d("Naresh",303,60000,6000);

    arr[0] = &emp;
    arr[1] = &m;
    arr[2] = &d;

    for (int  i = 0; i < 3; i++)
    {
        /* code */
        arr[i]->CalSalary();
        if(typeid(*arr[i])==typeid(Manager)){
            // cout<<"Manager"<<endl;
            Manager *Mobj = dynamic_cast<Manager*>(arr[i]);//down Cast
            Mobj->ManagerInsentives();
        }
        else if(typeid(*arr[i])==typeid(Developer)){
            Developer *d = dynamic_cast<Developer*>(arr[i]);
            d->DevIncetives();
        }
    }


    return 0;



}