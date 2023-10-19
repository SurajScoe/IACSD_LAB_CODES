#include<iostream>
using namespace std;
class Account{
    //Here only declaration is done
    //defination
    private:
    int acc_id;
    string name, city, email;
    double balance;

    public:
    Account();
    ~Account();
    Account(int acc_id,string name, string city, string email, double balance);
    void withdraw(double amount);
    void deposite(double amount);
    void display();

//Here we are passing UDT as parameter to method
    void TransferOfMoney(double amount, Account &rAcc);
};