/*6. Accept two numbers and calculate GCD of them.
 */
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter number1 : " << endl;
    cin >> num1;

    cout << "Enter number2 : " << endl;
    cin >> num2;
    /*Here we will take minimum value*/
    // int x = min(num1, num2);

   
    
    // for (int i = x; i >= 1; i--)
    // {
    //     /* code */
    //     /*Now here we will calculate the Greatest common factor for the number */
    //     if (num1 % i == 0 && num2 % i == 0)
    //     {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    int a = num1 , b = num2;
    int temp;
    while(num2!=0)
    {
         temp = num2;
        num2 = num1%num2;
        num1 = temp;
    }

    cout<<"GCD of "<<a<<" "<<b<<" is "<<num1<<endl;
    

    return 0;
}