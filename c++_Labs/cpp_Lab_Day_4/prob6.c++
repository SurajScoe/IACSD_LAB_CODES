/*5. Create a class ComplexNumber with data members real, imaginary.
 Create Default and Parameterized constructors. Write getters and setters
  for all the data members. Also add the display function. Create the 
  object of this class in main method and invoke all the methods in that class.*/
#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Default constructor
    ComplexNumber() {
        real = 0.0;
        imaginary = 0.0;
    }

    // Parameterized constructor
    ComplexNumber(double r, double i) {
        real = r;
        imaginary = i;
    }

    // Getter for real part
    double getReal() {
        return real;
    }

    // Setter for real part
    void setReal(double r) {
        real = r;
    }

    // Getter for imaginary part
    double getImaginary() {
        return imaginary;
    }

    // Setter for imaginary part
    void setImaginary(double i) {
        imaginary = i;
    }

    // Display the complex number
    void display() {
        std::cout << "Complex Number: " << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Create an object of ComplexNumber using the default constructor
    ComplexNumber complex1;

    // Set values using setters
    complex1.setReal(3.0);
    complex1.setImaginary(4.0);

    // Display the complex number
    complex1.display();

    // Create an object of ComplexNumber using the parameterized constructor
    ComplexNumber complex2(1.5, -2.5);

    // Display the complex number
    complex2.display();

    // Using getters to access and display parts of complex2
    std::cout << "Real Part of complex2: " << complex2.getReal() << std::endl;
    std::cout << "Imaginary Part of complex2: " << complex2.getImaginary() << std::endl;

    return 0;
}
