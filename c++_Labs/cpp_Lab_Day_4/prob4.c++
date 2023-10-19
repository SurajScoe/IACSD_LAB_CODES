/*3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
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
    Book(/* args */){
        bname = "HC Verma";
        author = "Verma";
        id = 101;
        price = 250;
    };
    // ~Book();

    Book(string bname, string author, int id, int price)
    {
        this->bname = bname;
        this->author = author;
        this->id = id;
        this->price = price;
    }

    void set_bname(string bname){
        this->bname = bname;
    }
    void set_author(string author){
        this->author = author;
    }
    void set_id(int id){
        this->id = id;
    }
    void set_price(int price){
        this->price = price;
    }

    string get_bname(){
        return bname;
    }

    string get_author(){
        return author;
    }

    int get_id(){
        return id;
    }

    int get_price(){
        return price;
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
    b.display();

    Book b2("do-epic-shit","ankur wariko",101,500);


    Book b1;

    b1.set_bname("ramayan");
    b1.set_author("Valmiki");
    b1.set_id(102);
    b1.set_price(1000);

    cout<<b1.get_bname()<<endl;
    cout<<b1.get_author()<<endl;
    cout<<b1.get_id()<<endl;
    cout<<b1.get_price()<<endl;
    return 0;
}