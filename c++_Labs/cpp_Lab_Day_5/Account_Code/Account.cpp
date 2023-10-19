#include<iostream>
#include"Account.h"
using namespace std;

Account::Account(){
    cout<<"------Inside the Default constructor--------"<<endl;
    acc_id = 101;
    name = "suraj malge";
    city = "Nanded";
    email = "suraj@123gmail.com";
    balance = 20000;
};

Account::~Account(){
    cout<<"------Inside the Destructor--------"<<endl;
}

Account::Account(int acc_id, string name, string city, string email, double balance){
    cout<<"------Inside the Parameterized constructor--------"<<endl;
    this->acc_id = acc_id;
    this->name = name;
    this->city = city;
    this->email = email;
    this->balance = balance;
}


void Account::withdraw(double amount)
{
    cout<<"------Inside the Withdrwa function--------"<<endl;
    this->balance = this->balance - amount;
    cout<<"The balance after withdrwal : "<<balance<<endl;
}

void Account::deposite(double amount)
{
    cout<<"------Inside the deposite function--------"<<endl;
    this->balance = this->balance + amount;
    cout<<"The balance after deposite : "<<balance<<endl;
}

void Account::display()
{
    cout<<"------Inside the display function--------"<<endl;
    cout<<"id of customer : "<<acc_id<<endl;
    cout<<"name of customer : "<<name<<endl;
    cout<<"city of customer : "<<city<<endl;
    cout<<"email of customer : "<<email<<endl;
    cout<<"balance of customer : "<<balance<<endl;
}


void Account::TransferOfMoney(double amount,Account &rAct){
    //Change Balance of sender
    this->balance = this->balance - amount;

    //Change Balance of reciever
    rAct.balance = rAct.balance+amount;

}


