/*1 Write a program to store characters 'A' to 'Z' in the file .
   Display the contents of file.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an ofstream object to write to a file
    ofstream outputFile("char.txt");

    // Check if the file is opened successfully
    if (!outputFile.is_open()) {
        cout<< "Error: Unable to open the file." << endl;
        return 1; // Return an error code
    }

    // Write characters 'A' to 'Z' to the file
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        outputFile << ch;
    }

    // Close the file
    outputFile.close();

    // Open the file for reading
    ifstream inputFile("char.txt");

    // Check if the file is opened successfully
    if (!inputFile.is_open()) {
        cout<< "Error: Unable to open the file." << endl;
        return 1; // Return an error code
    }

    // Read and display the contents of the file
    char character;
    while (inputFile.get(character)) {
        cout << character;
    }

    // Close the file
    inputFile.close();

    return 0; // Return success
}
