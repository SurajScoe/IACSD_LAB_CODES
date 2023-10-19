/*5:Defines a Student class with attributes like name, age, and grade.
Initializes a vector of Student objects.
Allows the user to add new students to the vector with their name, age, and grade.
Prints the list of students.*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Stduent{
    private: 
    string name;
    int age;
    string grade;

    public:
    Stduent(string name, int age, string grade){
        this->age=age;
        this->name=name;
        this->grade=grade;
    }

    void display()
    {
        cout<<this->age<<" "<<this->name<<" "<<this->grade<<endl;
    }

};

int main()
{
    vector<Stduent> s;
    Stduent s1("suraj",23,"A");
    Stduent s2("veeru",30,"A");
    Stduent s3("niraj",33,"B");
    // Stduent s2("suraj",23,"A");
    // Stduent s3("suraj",23,"A");

    s.push_back(s1);
    s.push_back(s2);
    s.push_back(s3);
    // s.push_back(s2);
    // s.push_back(s3);

    s1.display();
    s2.display();
    s3.display();

    
    
}
