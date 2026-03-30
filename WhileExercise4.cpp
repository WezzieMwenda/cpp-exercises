#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer value between 5 and 10: ";
    cin >> number;

    while (number < 5 || number > 10) {
        cout << "You entered " << number << ". Please enter a number between 5 and 10: ";
        cin >> number;
    }
    cout << "Your input value (" << number << ") has been accepted. " << endl;

    return 0;
}