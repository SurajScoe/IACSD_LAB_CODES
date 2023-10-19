/*Bank Account Inheritance:
Problem Statement: Design a system for managing bank accounts. Create a base class BankAccount with attributes like account number and balance. Derive classes like SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().
*/
#include <iostream>
using namespace std;
#include <typeinfo>
class BankAcc
{
protected:
    /* data */
    int AccNo;
    double balance;

public:
    BankAcc(int AccNo, double balance) : AccNo(AccNo), balance(balance)
    {
        cout << "Inside the Bank Constructor" << endl;
    };

    virtual void withdraw(double amount) = 0;
    virtual void Cal_Interest(double rate, int time, double amount) = 0;
};

class SavingAcc : public BankAcc
{
private:
    double interest;

public:
    SavingAcc(int AccNo, double balance, double interest) : BankAcc(AccNo, balance), interest(interest){};
    void withdraw(double amount)
    {
        cout << "Inside the Saving Account" << endl;
        cout << "Your Entered withdrawl amount : " << amount << endl;
        cout << "Your actual balance after withdrawal is : " << balance - amount << endl;
    };
    void Cal_Interest(double rate, int time, double amount)
    {
        cout << "Inside the Saving Account" << endl;
        cout << "The intereset on actual balance is : " << (double)time * amount * rate / 100 << "\n--------------------------------" << endl;
    };

    void SaveAcc()
    {
        cout << "This is my Saving Account" << endl;
    }
};

class CheckingAcc : public BankAcc
{
private:
    double interest;

public:
    CheckingAcc(int AccNo, double balance, double interest) : BankAcc(AccNo, balance), interest(interest){};
    void withdraw(double amount)
    {
        cout << "Inside the Checking Acoount" << endl;
        cout << "Your Entered withdrawl amount : " << amount << endl;
        if (amount > 0 && (balance - amount) > 0)
        {
            cout << "Withdrawal of " << amount << " Successful." << endl;
            cout << "Your actual balance after withdrawal is : " << balance - amount << endl;
        }
        else
        {
            cout << "Withdrawal failed.\n Try again !!" << endl;
        };
    };
    void Cal_Interest(double rate, int time, double amount)
    {
        cout << "Inside the Checking Acoount" << endl;
        cout << "The intereset on actual balance is : " << (double)time * amount * rate / 100 << endl;
    };

    void CheckAcc()
    {
        cout << "This is my check Account" << endl;
    }
};

int main()
{

    SavingAcc sa(101, 10000, 100);

    CheckingAcc ca(202, 20000, 200);

    // cout<<"Saving Account Information : "<<endl;
    // sa.withdraw(1000);
    // sa.Cal_Interest(4,2,2000);

    // cout<<"Checking Account Information : "<<endl;
    // ca.withdraw(2000);
    // ca.Cal_Interest(8,2,4000);

    BankAcc *ba[2];

    ba[0] = &sa;
    ba[1] = &ca;

    for (int i = 0; i < 2; i++)
    {
        /* code */
        ba[i]->withdraw(1000);
        ba[i]->Cal_Interest(4, 2, 2000);

        if (typeid(*ba[i]) == typeid(sa))
        {
            SavingAcc *saObj = dynamic_cast<SavingAcc *>(ba[i]);
            saObj->SaveAcc();
        }
        else if (typeid(*ba[i]) == typeid(ca))
        {
            CheckingAcc *chObj = dynamic_cast<CheckingAcc *>(ba[i]);
            chObj->CheckAcc();
        }
    }
}
