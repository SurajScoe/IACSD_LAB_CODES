#include<iostream>
using namespace std;
template<class T> T add(T &a, T&b){
	T res = a + b;
	return res;
}
template<class T> void swap1(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
	
}

int main(){
	int a = 1;
	int b = 2;
	float x = 3.5;
	float y = 4.2;
	
	cout<<"Before swap : "<<endl;
	cout<<"value of a = "<<a<<"\nvalue of b = "<<b<<endl;
	cout<<"Addition of a and b Before swap = "<<add(a,b)<<endl;
	
	swap1(a,b);
	
	cout<<"After swap :"<<endl;
	cout<<"value of a = "<<a<<"\nvalue of b = "<<b<<endl;
	cout<<"Addition of a and b after swap = "<<add(a,b)<<endl;
	
}