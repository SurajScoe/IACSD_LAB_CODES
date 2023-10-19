/*Incomplete Code*/

/*1 Solve this.
Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

Create Emp based organization structure --- Emp , Mgr , Worker


1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.

Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})

1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details

2. Hire Worker  
I/P : all worker details

3. Display information of all employees net salary (by invoking computeNetSal), 

4. Exit
----------------------------------------------------
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class Emp
class Emp {
public:
    int id;
    string name;
    int deptId;
    double basicSalary;

    Emp(int _id, const string& _name, int _deptId, double _basicSalary)
        : id(_id), name(_name), deptId(_deptId), basicSalary(_basicSalary) {}

    // Virtual method to compute net salary
    virtual double computeNetSalary() {
        return 0;
    }
};

// Derived class Mgr from Emp
class Mgr : public Emp {
public:
    double perfBonus;

    Mgr(int _id, const string& _name, int _deptId, double _basicSalary, double _perfBonus)
        : Emp(_id, _name, _deptId, _basicSalary), perfBonus(_perfBonus) {}

    // Override computeNetSalary for Manager
    double computeNetSalary() override {
        return basicSalary + perfBonus;
    }
};

// Derived class Worker from Emp
class Worker : public Emp {
public:
    int hoursWorked;
    double hourlyRate;

    Worker(int _id, const string& _name, int _deptId, double _basicSalary, int _hoursWorked, double _hourlyRate)
        : Emp(_id, _name, _deptId, _basicSalary), hoursWorked(_hoursWorked), hourlyRate(_hourlyRate) {}

    // Override computeNetSalary for Worker
    double computeNetSalary() override {
        return basicSalary + (hoursWorked * hourlyRate);
    }

    // Getter for hourlyRate
    double getHourlyRate() {
        return hourlyRate;
    }
};

int main() {
    vector<Emp*> organization; // Vector to store organization details

    while (true) {
        cout << "Options:" << endl;
        cout << "1. Hire Manager" << endl;
        cout << "2. Hire Worker" << endl;
        cout << "3. Display information of all employees' net salary" << endl;
        cout << "4. Exit" << endl;

        int option;
        cin >> option;

        if (option == 1) {
            int id, deptId;
            string name;
            double basicSalary, perfBonus;

            cout << "Enter Manager ID: ";
            cin >> id;
            cout << "Enter Manager Name: ";
            cin >> name;
            cout << "Enter Manager Department ID: ";
            cin >> deptId;
            cout << "Enter Manager Basic Salary: ";
            cin >> basicSalary;
            cout << "Enter Manager Performance Bonus: ";
            cin >> perfBonus;

            organization.push_back(new Mgr(id, name, deptId, basicSalary, perfBonus));
        } else if (option == 2) {
            int id, deptId, hoursWorked;
            string name;
            double basicSalary, hourlyRate;

            cout << "Enter Worker ID: ";
            cin >> id;
            cout << "Enter Worker Name: ";
            cin >> name;
            cout << "Enter Worker Department ID: ";
            cin >> deptId;
            cout << "Enter Worker Basic Salary: ";
            cin >> basicSalary;
            cout << "Enter Worker Hours Worked: ";
            cin >> hoursWorked;
            cout << "Enter Worker Hourly Rate: ";
            cin >> hourlyRate;

            organization.push_back(new Worker(id, name, deptId, basicSalary, hoursWorked, hourlyRate));
        } else if (option == 3) {
            cout << "Employee Details and Net Salaries:" << endl;
            for (Emp* emp : organization) {
                cout << "ID: " << emp->id << ", Name: " << emp->name << ", Net Salary: $" << emp->computeNetSalary() << endl;

                // If the employee is a Worker, also display the hourly rate
                Worker* worker = dynamic_cast<Worker*>(emp);
                if (worker) {
                    cout << "Hourly Rate: $" << worker->getHourlyRate() << endl;
                }
            }
        } else if (option == 4) {
            // Cleanup and exit
            for (Emp* emp : organization) {
                delete emp;
            }
            break;
        }
    }

    return 0;
}
