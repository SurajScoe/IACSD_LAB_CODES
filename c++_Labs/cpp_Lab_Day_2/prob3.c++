/*3. Write a program to accept a character, an integer n and display the next n characters.
*/
#include<iostream>
using namespace std;
int main()
{
    char ch, ch1;
    int n;
    cout<<"The Character"<<endl;
    cin>>ch;

    cout<<"The Integer n"<<endl;
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        /* code */
        ch1 = ch + i;
        cout<<ch1<<" ";
    }
    return 0;
}