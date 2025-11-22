#include <iostream>     
using namespace std;    

int main() {
    const int correctPassword = 12345;   // Predefined correct password
    int userPassword;                    // Variable to store user input
    int attempts = 5;                    // Number of attempts allowed

    // Start a while loop that continues while attempts remain
    while (attempts > 0) {

        cout << "Enter password: ";     // Ask user for password
        cin >> userPassword;            // Read user input

        if (userPassword == correctPassword) {   // Check if password is correct
            cout << "Welcome to the Secure Area!" << endl;  // Success message
            return 0;                                    // End program
        } 
        else {    // If password is wrong
            attempts--;                                  // Reduce remaining attempts
            cout << "Incorrect password. ";              // Inform user

            // If attempts still remain, tell the user how many are left
            if (attempts > 0) {
                cout << "Attempts remaining: " << attempts << endl;
            }
        }
    }

    // If loop ends because attempts reached 0
    cout << "Too many failed attempts. The authorities have been alerted!" << endl;

    return 0;    // End of program
}
