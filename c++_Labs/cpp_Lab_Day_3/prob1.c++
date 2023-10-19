/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/
#include<iostream>
using namespace std;
class Student
{
private:
    /* data */
    int rollno, mark1, mark2, mark3;
public:
//  Student(/* args */);
    //  Student();
    
    void accept_data(){
        cout<<"Enter the Details of Student : "<<endl;
        cout<<"Enter the RollNo : "<<endl;
        cin>>rollno;
        cout<<"Enter the mark1 : "<<endl;
        cin>>mark1;
        cout<<"Enter the mark2 : "<<endl;
        cin>>mark2;
        cout<<"Enter the mark2 : "<<endl;
        cin>>mark3;
    }

    void display(){
        cout<<"Entered Details are as follows : "<<endl;
        cout<<" RollNo : "<<rollno<<endl;
        cout<<" mark1 : "<<mark1<<endl;
        cout<<" mark2 : "<<mark2<<endl;
        cout<<" mark3 : "<<mark3<<endl;
        cout<<" The Total marks are : "<<total_marks()<<endl;
        cout<<" The percentage is : "<<percentage()<<endl;
    }

    int total_marks(){
        int total = mark1+mark2+mark3;
        return total;
    }
    float percentage(){
        float per = (float)total_marks()/3;
        return per;
    }
};
//  Student: Student(/* args */)
// {
// }
//  Student:: Student()
// {
// }

int main()
{
    Student s;
    s.accept_data();
    s.display();
    return 0;
}