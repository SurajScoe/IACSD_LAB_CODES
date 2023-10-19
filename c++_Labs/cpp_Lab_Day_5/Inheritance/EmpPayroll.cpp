/*Employee Payroll System with Abstract Classes:
Problem Statement: Design an employee payroll system. Create an abstract class Employee with attributes like
 name and employee ID. Derive concrete classes like HourlyEmployee and SalariedEmployee. Define abstract 
 methods for calculating pay in the base class and implement them in the derived classes.*/
#include <iostream>
using namespace std;

// Abstract base class Employee
class Employee {
public:
    string name;
    int employeeID;

    Employee(const string& _name, int _employeeID)
        : name(_name), employeeID(_employeeID) {}

    // Pure virtual function for calculating pay (abstract method)
    virtual double calculatePay() = 0;
};

// Derived class HourlyEmployee
class HourlyEmployee : public Employee {
public:
    double hourlyRate;
    int hoursWorked;

    HourlyEmployee(const string& _name, int _employeeID, double _hourlyRate, int _hoursWorked)
        : Employee(_name, _employeeID), hourlyRate(_hourlyRate), hoursWorked(_hoursWorked) {}

    // Implementation of calculatePay for HourlyEmployee
    double calculatePay() override {
        return hourlyRate * hoursWorked;
    }
};

// Derived class SalariedEmployee
class SalariedEmployee : public Employee {
public:
    double monthlySalary;

    SalariedEmployee(const string& _name, int _employeeID, double _monthlySalary)
        : Employee(_name, _employeeID), monthlySalary(_monthlySalary) {}

    // Implementation of calculatePay for SalariedEmployee
    double calculatePay() override {
        return monthlySalary;
    }
};

int main() {
    // Create instances of HourlyEmployee and SalariedEmployee
    HourlyEmployee hourlyEmp("John Doe", 12345, 20.0, 40); // $20 per hour, 40 hours worked
    SalariedEmployee salariedEmp("Alice Smith", 54321, 4000.0); // $4000 monthly salary

    // Calculate and display pay for both employees
    cout << "Hourly Employee Pay: $" << hourlyEmp.calculatePay() << endl;
    cout << "Salaried Employee Pay: $" << salariedEmp.calculatePay() << endl;

    return 0;
}
