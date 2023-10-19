/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt)
public void deposit(double amt)*/

#include <iostream>
using namespace std;

class BankAcc
{
private:
    /* data */
    int acct_no;
    string customer_name;
    double balance;

public:
    // BankAcc(/* args */){

    // };
    BankAcc(int acct_no, string customer_name, double balance)
    {
        cout << "Inside the para const" << endl;
        this->acct_no = acct_no;
        this->customer_name = customer_name;
        this->balance = balance;
    }
    // ~BankAcc();

    void AcceptDetails()
    {
        cout << "Enter the Account number : " << endl;
        cin >> this->acct_no;
        cout << "Enter the customer name : " << endl;
        cin.ignore();
        getline(cin,customer_name);
        cout << "Enter the balance : " << endl;
        cin >> this->balance;
    }
    void display()
    {
        cout << "Inside the display func" << endl;
        cout <<"your account balance is " <<this->balance << endl;
    }
    void withdraw(double amt)
    {
        cout << "Inside the withdraw func" << endl;
        this->balance = this->balance - amt;
    }
    void deposite(double amt)
    {
        cout << "Inside the deposite func" << endl;
        this->balance = this->balance + amt;
    }
};

int main()
{
    // BankAcc Bk(232,"ramesh",20000);
    // Bk.display();
    // Bk.deposite(2000);
    // Bk.display();
    // Bk.withdraw(5000);
    // Bk.display();

    BankAcc Bk1(232,"ramesh",2000);
    Bk1.AcceptDetails();
    Bk1.deposite(1000);
    Bk1.display();
    Bk1.withdraw(5000);
    Bk1.display();

    return 0;
}