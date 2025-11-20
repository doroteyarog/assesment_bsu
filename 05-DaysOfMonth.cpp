#include <iostream> 
using namespace std;

int main() {
    int month; // Variable to store the month number entered by the user

    cout << "Enter a month number (1-12): "; // Prompt user for input
    cin >> month; // Read month number from user

    switch(month) { // Start switch statement based on the month number
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            // Months with 31 days
            cout << "31 days" << endl; 
            break; // Exit switch after matching case
        case 4: case 6: case 9: case 11:
            // Months with 30 days
            cout << "30 days" << endl;
            break; // Exit switch after matching case
        case 2:
            // February can have 28 or 29 days depending on leap year
            cout << "28 or 29 days (leap year)" << endl;
            break; // Exit switch after matching case
        default:
            // Handles invalid month numbers (not 1-12)
            cout << "Invalid month number!" << endl;
    }

    return 0;
}
