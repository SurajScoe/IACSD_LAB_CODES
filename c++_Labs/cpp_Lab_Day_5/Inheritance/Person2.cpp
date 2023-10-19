/*Person and Student Inheritance:
Problem Statement: Model a system for handling individuals and students 
within an educational institution. Create a base class Person with attributes 
like name and age. Derive a Student class with additional attributes like student 
ID and GPA, inheriting the common attributes from the Person class.*/
#include <iostream>
using namespace std;

// Base class Person
class Person {
public:
    string name;
    int age;

    Person(string _name, int _age)
        : name(_name), age(_age) {}

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student inheriting from Person
class Student : public Person {
public:
    int studentID;
    double GPA;

    Student(string _name, int _age, int _studentID, double _GPA)
        : Person(_name, _age), studentID(_studentID), GPA(_GPA) {}

    void displayStudentInfo() {
        displayInfo();
        cout << "Student ID: " << studentID << ", GPA: " << GPA << endl;
    }
};

int main() {
    // Create a Person and a Student
    Person person("Suraj Malge", 23);
    Student student("Amit banda", 20, 12345, 3.75);

    // Display information for both
    cout << "Person Information:" << endl;
    person.displayInfo();

    cout << "\nStudent Information:" << endl;
    student.displayStudentInfo();

    return 0;
}

