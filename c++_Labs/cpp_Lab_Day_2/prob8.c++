/*8. Write a program to print all prime numbers between 1 to n*/
#include<iostream>
using namespace std;
int isPrime(int n){
    if(n==1 && n==0)
    return 0;
    for (int i = 2; i < n; i++)
    {
        /* code */
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;
    cout<<"Enter the number !!"<<endl;
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        /* code */
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}
