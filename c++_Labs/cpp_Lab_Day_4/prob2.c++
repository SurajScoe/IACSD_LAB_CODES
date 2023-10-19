/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. 
*/

#include<iostream>
using namespace std;
class Person
{
private:
    /* data */
    int age;
    string city, name ;
public:
    Person()
    {
        cout<<"Inside the Default constructor !!"<<endl;
        age = 23;
        city = "Nanded";
        name = "suraj";
    }
    
    Person(string name, int age, string city)
    {
        cout<<"Inside the Parametrized constructor !!"<<endl;

        this->name = name;
        this->age = age;
        this->city = city;
    }

    // void accept()
    // {
    //     cout<<"Enter the name of Person : "<<endl;
    //     cin>>name;
    //     cout<<"Enter the age of Person : "<<endl;
    //     cin>>age;
    //     cout<<"Enter the City of Person : "<<endl;
    //     cin>>city;
    // }

    void display()
    {
        cout<<"name of Person : "<<name<<endl;
        cout<<"age of Person : "<<age<<endl;
        cout<<"city of Person : "<<city<<endl;
    }

    void set_name(string name){
        this->name = name;
    }
    void set_city(string city){
        this->city = city;
    }
    void set_age(int age){
        this->age = age;
    }

    string get_name(){
        return name;
    }
    string get_city(){
        return city;
    }
    int get_age(){
        return age;
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
    // p.accept();
    p.display();

    Person p1("Mayur",20,"pune");

    p1.display();

    p1.set_age(30);
    p1.set_name("ram");
    p1.set_city("goa");

    cout<<"updated name of person "<<p1.get_name()<<endl;
    cout<<"updated age of person "<<p1.get_age()<<endl;
    cout<<"updated city of person "<<p1.get_city()<<endl;
    
    return 0;
}