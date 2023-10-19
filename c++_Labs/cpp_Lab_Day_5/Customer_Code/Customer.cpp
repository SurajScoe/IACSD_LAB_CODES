#include<iostream>
#include "Customer.h"
using namespace std;
//assign value to static data memeber
//static int custCounter;
int Customer::custCounter=0;
int Customer::custIdCounter=1000;
void Customer::display(){
	
	cout<<"-----------"<<endl;
	cout<<custId<<"   "<<name<<"   "<<city<<"   Total Cust="<<custCounter;
	
	
}

Customer::Customer(){
	cout<<"---default---"<<endl;
	custIdCounter++;
	this->custId=custIdCounter;//auto incremeted and assign to instance var
	this->name="ram";
	this->city="pune";
	custCounter++;//increment custCounter by 1
	
}
Customer::Customer(string name,string city){
		cout<<"---parameter---"<<endl;
		
		custIdCounter++;//1001
		this->custId=custIdCounter;
	this->name=name;
	this->city=city;
	custCounter++;//increment custCounter by 1	
		
}
void Customer::showTotalCount(){
	
	cout<<"Total Customers:"<<custCounter<<endl;
	
}







