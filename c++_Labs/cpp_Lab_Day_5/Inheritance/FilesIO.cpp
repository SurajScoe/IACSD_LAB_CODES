#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to store data in a file
void storeDataInFile() {
    std::ofstream outputFile("data.txt");
    
    if (outputFile.is_open()) {
        outputFile << "Hello, World!" << std::endl;
        outputFile << "This is stored in a file." << std::endl;
        outputFile.close();
    } else {
        std::cerr << "Error opening the file for writing." << std::endl;
    }
}

// Function to retrieve data from the file as a string
string getDataFromFile() {
    ifstream inputFile("data.txt");
    string data;
    
    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            data += line + "\n";
        }
        inputFile.close();
    } else {
        std::cerr << "Error opening the file for reading." << std::endl;
    }
    
    return data;
}

// Function to print file contents to console
void printFileContents(std::fstream& file) {
    string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
}

int main() {
    // Store data in a file
    storeDataInFile();
    
    // Open the file for reading
    fstream inputFile("data.txt", std::ios::in);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file for reading." << std::endl;
        return 1;
    }

    // Print the file contents to the console
    printFileContents(inputFile);

    // Close the file
    inputFile.close();

    return 0;
}
