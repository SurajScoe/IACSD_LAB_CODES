/*3. Create a class Book with data members as bname,id,author,price. Write AcceptBook function . Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. 
*/
#include<iostream>
using namespace std;
class Book
{
private:
    /* data */
    string bname, author;
    int id, price;
public:
    // Book(/* args */);
    // ~Book();

    void AcceptBook()
    {
        cout<<"Enter the Book Name : "<<endl;
        // cin>>bname;
        getline(cin,bname);
        
        cout<<"Enter the Book Id : "<<endl;
        cin>>id;
        /*By using cin.ignore() before getline, you clear any residual newline characters in the input buffer, which can help prevent skipping issues when taking string input.*/
        cin.ignore();
        cout<<"Enter the Book author : "<<endl;
        // cin>>author;
        getline(cin,author);
        
        cout<<"Enter the Book Price : "<<endl;
        cin>>price;
        
    }

    void display()
    {
        cout<<"The Name of the Book is "<<bname<<endl;
        cout<<"The author of the Book is "<<author<<endl;
        cout<<"The price of the Book is "<<price<<endl;
    }
};

// Book::Book(/* args */)
// {
// }

// Book::~Book()
// {
// }

int main()
{
    Book b;
    b.AcceptBook();
    b.display();
    return 0;
}