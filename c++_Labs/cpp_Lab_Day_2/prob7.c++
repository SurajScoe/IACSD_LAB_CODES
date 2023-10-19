#include<iostream>
using namespace std;
/*Cal Area of circle , Triangle , Rectangle suing menu driven program*/
int main() {
    int choice;
    cout << "------------Hey compute some Areas----------" << endl;
    
    do {
        cout << "Enter Your choice (1: Circle, 2: Triangle, 3: Rectangle, 4: Exit): ";
        cin >> choice;

        switch (choice) {
            case 1:
                float r;
                cout << "Enter the radius of Circle: ";
                cin >> r;
                cout << "Area of Circle: " << 3.14159265 * r * r << endl;
                break;

            case 2:
                float base, height;
                cout << "Enter the base length: ";
                cin >> base;
                cout << "Enter the height: ";
                cin >> height;
                cout << "Area of Triangle: " << 0.5 * base * height << endl;
                break;

            case 3:
                float length, breadth;
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the breadth: ";
                cin >> breadth;
                cout << "Area of Rectangle: " << length * breadth << endl;
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Please enter a valid choice!" << endl;
                break;
        }
    } while (choice != 4);

    cout << "---Happy coding-----" << endl;
    
    return 0;
}
