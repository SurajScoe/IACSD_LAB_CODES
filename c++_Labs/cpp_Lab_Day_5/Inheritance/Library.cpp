/*Library Catalog with Books and Journals:
Problem Statement: Build a library catalog system. Create a base class LibraryItem with properties like title and author. Then, derive classes like Book and Journal, each with their unique properties. Implement methods to check out and return items in the derived classes.
*/
#include <iostream>
#include <string>

// Base class LibraryItem
class LibraryItem {
public:
    std::string title;
    std::string author;
    bool checkedOut;

    LibraryItem(const std::string& _title, const std::string& _author)
        : title(_title), author(_author), checkedOut(false) {}

    // Method to check out the item
    void checkOut() {
        if (!checkedOut) {
            checkedOut = true;
            std::cout << title << " by " << author << " has been checked out." << std::endl;
        } else {
            std::cout << title << " by " << author << " is already checked out." << std::endl;
        }
    }

    // Method to return the item
    void returnItem() {
        if (checkedOut) {
            checkedOut = false;
            std::cout << title << " by " << author << " has been returned." << std::endl;
        } else {
            std::cout << title << " by " << author << " is not checked out." << std::endl;
        }
    }
};

// Derived class Book
class Book : public LibraryItem {
public:
    int pageCount;

    Book(const std::string& _title, const std::string& _author, int _pageCount)
        : LibraryItem(_title, _author), pageCount(_pageCount) {}
};

// Derived class Journal
class Journal : public LibraryItem {
public:
    int issueNumber;

    Journal(const std::string& _title, const std::string& _author, int _issueNumber)
        : LibraryItem(_title, _author), issueNumber(_issueNumber) {}
};

int main() {
    // Create a Book and a Journal
    Book book("The Great Gatsby", "F. Scott Fitzgerald", 180);
    Journal journal("Science Journal", "John Doe", 35);

    // Check out and return items
    book.checkOut();
    journal.checkOut();
    book.returnItem();
    journal.returnItem();

    return 0;
}
