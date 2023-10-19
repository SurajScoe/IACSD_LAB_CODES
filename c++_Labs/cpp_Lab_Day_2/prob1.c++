/*1:Write a program that accepts numbers continuously as long as the number is positive and prints the 
sum of the given numbers. */

#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;
    do{
        cout<<"Enter the num"<<endl;
        cin>>num;
        sum+=num;

    }while(num>=0);

    cout<<"sum of the given numbers : "<<sum<<endl;
    return 0;
}