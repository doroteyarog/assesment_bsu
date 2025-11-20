#include <iostream> // Include the standard input/output library
using namespace std;

int main() {
    int year;        // Variable to store the user's guess for the year (integer)
    float piGuess;   // Variable to store the user's guess for Pi (floating-point number)
    char answer;     // Variable to store a single character response ('y' or 'n')

    cout << "What year is it? ";  // Prompt the user to enter the current year
    cin >> year;                   // Read the user's input into the 'year' variable

    cout << "Your guess for Pi (approximate)? "; // Prompt user to guess Pi
    cin >> piGuess;                             // Read user's floating-point input

    cout << "Is programming fun? (y/n): "; // Ask user a yes/no question
    cin >> answer;                          // Read a single character response

    cout << "\n--- Your Answers ---" << endl; // Print a header for the output summary
    cout << "Year: " << year << endl;        // Display the year entered by the user
    cout << "Pi guess: " << piGuess << endl; // Display the Pi guess
    // Display if programming is fun based on the user's answer ('y' or 'Y' means yes)
    cout << "Programming fun: " << ((answer == 'y' || answer == 'Y') ? "Yes!" : "No?") << endl;

    return 0; // End the program
}
