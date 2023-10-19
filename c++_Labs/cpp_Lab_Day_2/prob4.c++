/*4. Write a program to calculate factorial of a number. 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int res = 1;
    int temp = n;
    while (n>0)
    {
        /* code */
        res *= n;
        n--;
    }

    cout<<"The factorial of number "<<temp<<"! = "<<res<<endl;
    
    return 0;
}