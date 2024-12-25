#include <iostream>
using namespace std;

int main() {
    int day; // Variable to store the user's input

    cout << "Welcome User" << endl; // Greeting
    cout << "Enter day  ";
    cin >> day; // Input the day number

    // Determine the day based on the input
    switch (day) {
        case 1:
            cout << "It's axad" << endl;
            break;
        case 2:
            cout << "It's isniin" << endl;
            break;
        case 3:
            cout << "It's salaasa" << endl;
            break;
        case 4:
            cout << "It's arbaca" << endl;
            break;
        case 5:
            cout << "It's khamiis" << endl;
            break;
        case 6:
            cout << "It's jimce" << endl;
            break;
        case 7:
            cout << "It's sabti" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }

   
}



