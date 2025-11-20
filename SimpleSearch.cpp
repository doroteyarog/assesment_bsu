#include <iostream>     
using namespace std;    

int main() {
    int numbers[5] = {3, 7, 12, 19, 21};  // Define an array of 5 integers
    int search;                           // Variable to store the number to search for
    bool found = false;                   // Boolean flag to indicate if the number was found

    cout << "Enter number to search: ";   // Ask the user for a number
    cin >> search;                        // Read the user's input and store it in 'search'

    // Loop through each element in the array
    for (int i = 0; i < 5; i++) {
        if (numbers[i] == search) {       // Check if the current element matches the search value
            found = true;                 // If a match is found, set 'found' to true
            break;                        // Exit the loop early since we found the number
        }
    }

    // After the loop, check whether the number was found
    if (found)
        cout << search << " was found in the list." << endl;  // Print success message
    else
        cout << search << " was not found." << endl;          // Print failure message

    return 0;                            // End of program; return 0 indicates successful execution
}
