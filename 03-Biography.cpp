#include <iostream>     
#include <string>       
using namespace std;

int main() {
    string name;        // Variable to store the user's full name
    string hometown;    // Variable to store the user's hometown
    int age;            // Variable to store the user's age (integer)

    // Ask the user to enter their full name
    cout << "Enter your full name: ";
    getline(cin, name); // getline() allows names with spaces (e.g., first + last name)

    // Ask the user to enter their hometown
    cout << "Enter your hometown: ";
    getline(cin, hometown); // getline() allows towns with multiple words

    // Ask the user to enter their age
    cout << "Enter your age: ";
    while (!(cin >> age)) {              // Loop continues if user enters letters instead of a number
        cin.clear();                     // Clears the error state
        cin.ignore(1000, '\n');          // Removes invalid input from the buffer
        cout << "Invalid input. Please enter a number: ";  // Ask again if input is not a number
    }

    // Output all the information using ONLY ONE cout
    // \n ensures each item appears on its own line
    cout << name << "\n" << hometown << "\n" << age;

    return 0;   // End of the program
}

