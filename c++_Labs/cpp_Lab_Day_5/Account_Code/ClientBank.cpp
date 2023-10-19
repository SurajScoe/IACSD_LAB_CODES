#include<iostream>
#include"Account.h"
using namespace std;

int main()
{
    Account a;
    a.display();

    Account a1(102,"ram","pune","ram@123gmai.com",12000);
    a1.display();

    a1.deposite(1000);
    a1.withdraw(2000);
    a1.display();
}