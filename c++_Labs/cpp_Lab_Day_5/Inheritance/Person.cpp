#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class Person
{
protected:
    int id;
    string first_name;
    string last_name ;
    public : 
    Person(){};
    // ~Person();
    Person(int id, string first_name, string last_name)
    {
        this->id = id;
        this->first_name = first_name;
        this->last_name = last_name;
    }

    virtual void CalAvg() = 0;
};

class Student : public Person
{
private:
    int mark[2];
    double Avg;

public:
Student(){
};
// ~Student();
    Student(int id, string first_name, string last_name)
    {
        this->id = 101;
        this->first_name = "Ram";
        this->last_name = "narayan";
    }

    void accept_data()
    {
        for (int i = 0; i < 3; i++)
        {
            /* code */
            cout << "Enter the mark[" << i << "] = " << endl;
            cin >> mark[i];
        }
    }

    void CalAvg()
    {
        int sum = 0;

        for (int i = 0; i < 3; i++)
        {
            /* code */
            sum += mark[i];
        }
        cout<<"The sum is "<<sum<<endl;
        Avg = (double)sum / 3;
        cout<<"The Avg of Student "<<Avg<<endl;
    }

    void CalGrad(){
        if(90>=Avg){
            cout<<"Grade is A"<<endl;
        }
        else if(80>=Avg){
            cout<<"Grade is B"<<endl;
        }
        else if(70>=Avg){
            cout<<"Grade is C"<<endl;
        }
        else if(60>=Avg){
            cout<<"Grade is E"<<endl;
        }
        else{
            cout<<"Try next Year"<<endl;
        }
    }

    void display_data()
    {
        for (int i = 0; i < 3; i++)
        {
            /* code */
            cout << " mark " << i << " = " << mark[i] << endl;
        }
    }



void store_data(ifstream& infile){

}
};

int main()
{
    cout << "Enter number of student you want to Enter : " << endl;
    int num;
    cin >> num;
    Student s1(216,"suraj","malge");

    for (int i = 1; i <= num; i++)
    {
        /* code */

        Student s;
        cout << "Enter the details for student " << endl;
        s.accept_data();
        s.display_data();
        s.CalAvg();
        s.CalGrad();
    }
    
    //Wriring this data to Employee.txt
   ofstream file1;
   //ios:app Append mode. All output to that file to be appended to the end.
   file1.open("stud.txt", ios::app);
   file1.write((char*)&s1,sizeof(s1));
   file1.close();
   //Reading data from EMployee.txt
   ifstream file2;
   //ios:in open file for reading
   file2.open("stud.txt",ios::in);
   file2.read((char*)&s1,sizeof(s1));

   cout<<"suraj"<<endl;

   file2.close(); 
}