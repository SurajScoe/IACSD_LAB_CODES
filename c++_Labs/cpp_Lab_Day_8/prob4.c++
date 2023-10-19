/*4:Create a C++ program that does the following:
Initializes an empty vector of integers.
Asks the user to enter a series of integers and adds them to the vector until the user enters a specific sentinel value (e.g., -1).
Prints the elements of the vector.
Calculates and prints the sum and average of the values in the vector.
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the values in vector : "<<endl;
    while (true)
    {
        /* code */
        cin>>n;
        if(n<0)
        break;
        v.push_back(n);
    }

    cout<<"print all Elements of vetcor : "<<endl;

    int sum = 0;
    for(int i : v){
        cout<<i<<" ";
        sum += i;
    }

    int avg = sum/v.size();
    
    cout<<"\nsum of the values are : "<<sum<<endl;

    cout<<"Average of the values are : "<<avg<<endl;
    return 0;
}


