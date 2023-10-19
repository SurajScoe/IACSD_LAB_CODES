/*1:Create class for Handling Exception for Student
Create StudentException class;
Create Student class with data members (rollno,name,age)
at the time of student creation check age if age<18 then throw exception*/

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Custom exception class for students
class StudentException : public exception {
public:
    const char* what() const noexcept override {
        return "Student age is less than 18";
    }
};

// Class representing a student
class Student {
public:
    int rollno;
    string name;
    int age;

    // Constructor that checks if age is >= 18; throws StudentException if not
    Student(int _rollno, const string& _name, int _age) : rollno(_rollno), name(_name), age(_age) {
        if (age < 18) {
            throw StudentException();
        }
    }
};

int main() {
    try {
        // Create a student with age less than 18 to trigger the exception
        Student student1(101, "John", 17);

        // This line won't be executed if the exception is thrown
        cout << "Student created successfully." << endl;
    } catch (const StudentException& ex) {
        cout << "Exception: " << ex.what() << endl;
    }

    try {
        // Create a student with age >= 18
        Student student2(102, "Alice", 20);

        // This line will be executed successfully
        cout << "Student created successfully." << endl;
    } catch (const StudentException& ex) {
        cout << "Exception: " << ex.what() << endl;
    }

    return 0;
}
