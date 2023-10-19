/*2. Create class cEmployee with data members as empno,name and salary.
   Accept values from user. Store it in file.
   Display the contents from file.
   Program should be able to store information of multiple employees.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class cEmplyee
{
private:
    /* data */
    int empno;
    char name[50];
    double salary;

public:
    // cEmplyee(int empno, string name, double salary){
    //     this->empno = empno;
    //     this->name = name;
    //     this->salary = salary;
    // };

    void Accept_values()
    {
        cout << "Enter the empno : " << endl;
        cin >> empno;
        cin.ignore();
        cout << "Name : " << endl;
        cin >> name;
        // getline(cin,name);
        cout << "salary : " << endl;
        cin >> salary;
    }

    void display_value()
    {
        cout << this->empno << " " << this->name << " " << this->salary << endl;
    }
};

int main()
{
    cEmplyee e1;
    e1.Accept_values();
    /*this s1 object store into file*/
    /*write operation*/
    ofstream outFile("Employee.txt");
    /*to store the object e1
    the below line will store the s1 into file*/
    outFile.write((char *)&e1, sizeof(cEmplyee));
    cout << "Employee Data gets stored into file" << endl;
    outFile.close();

    /*read the data from file*/
    cEmplyee e2;
    ifstream inputFile("Employee.txt");
    inputFile.read((char *)&e2, sizeof(cEmplyee));
    e2.display_value();
    inputFile.close();

    return 1;
}
