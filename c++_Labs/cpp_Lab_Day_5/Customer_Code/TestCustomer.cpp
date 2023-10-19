#include<iostream>
#include "Customer.h"
using namespace std;
int main()
{
	//how to access static method
	//using class name
	Customer::showTotalCount();
	
	Customer cust1;
	cust1.display();
	
	Customer cust2("Vaishali","Pune");
	cust2.display();
 	Customer cust3;
 	cust3.display();
 	Customer cust4;
 	cust4.display();
	
	cout<<"----------------------"<<endl;
	Customer::showTotalCount();
	
	return 0;
}
