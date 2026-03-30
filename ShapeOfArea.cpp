#include <iostream>
using namespace std;

int main() {
    int choice;
    double side, length, width, base, height, area;

    cout << "Please select the area of the shape to calculate" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit program" << endl;
    cout << "Enter selection: ";
    cin >> choice;

    switch (choice) {
        case 1:
             cout << "Enter the side of the square: ";
             cin >> side;
             area = side * side;
             cout << "The area of the square is: " << area << endl;
             break;

        case 2:
             cout << "Enter the length of the rectangle: ";
             cin >> length;
             cout << "Enter the width of the rectangle: ";
             cin >> width;
             area = length * width;
             cout << "The area of the recctangle is: " << area << endl;
             break;

        case 3:
             cout << "Enter the base of the triangle: ";
             cin >> base;
             cout << "enter the height of the triangle: ";
             cin >> height;
             area = 0.5 * base * height;
             cout << "The area of the triangle is: " << area << endl;
             break;

        case 4:
             cout << "Program exited." << endl;
             break;

        default:
            cout << "Invalid choice. Please run the program again." << endl;

    }
    return 0;
}