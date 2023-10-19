/*2. Write a program to accept two integers x and n and compute x raised to n.
*/
#include<iostream>
using namespace std;
int main()
{
    int x,n,res=1;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        /* code */
        res = res*x;
    }

    cout<<"x raised to n "<<res<<endl;
    
}