/*1. Create a class Person with data members as name, age, city. 
members. Also add accept and  display function. . Create the 
object of this class in main method and invoke all the methods in that class. */
#include<iostream>
using namespace std;
class Person
{
private:
    /* data */
    int age;
    string city, name ;
public:
    // Person(/* args */);
    // ~Person();

    void accept()
    {
        cout<<"Enter the name of Person : "<<endl;
        cin>>name;
        cout<<"Enter the age of Person : "<<endl;
        cin>>age;
        cout<<"Enter the City of Person : "<<endl;
        cin>>city;
    }

    void display()
    {
        cout<<"name of Person : "<<name<<endl;
        cout<<"age of Person : "<<age<<endl;
        cout<<"city of Person : "<<city<<endl;
    }
};

// Person::Person(/* args */)
// {
// }

// Person::~Person()
// {
// }

int main()
{
    Person p;
    p.accept();
    p.display();
    
    return 0;
}