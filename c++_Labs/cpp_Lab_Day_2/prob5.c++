/*5. Write a program to calculate factors of a given number.
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any number : "<<endl;
    cin>>num;
    cout<<"The Factors of number is ";
    for (int i = 1; i < num; i++)
    {
        /* code */
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    
    return 0;
}