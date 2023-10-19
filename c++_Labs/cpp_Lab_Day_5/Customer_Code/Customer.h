#include<iostream>
using namespace std;

class Customer
{
private: int custId;
         string name;
	string city;
	static	int custCounter;//total number of customer
	static int custIdCounter;//auto increment of custId
	
public :Customer();	
        Customer(string name,string city); 
        void display(); 
        static void showTotalCount();
        
        
        
        
        
};
