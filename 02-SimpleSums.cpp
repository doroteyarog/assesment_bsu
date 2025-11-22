#include <iostream>     
using namespace std;    

int main() {            // Main function where program execution begins
    int a, b;           // Declare two integer variables a and b

    cout << "Enter first number: ";   // Ask user for the first number
    cin >> a;                         // Read the first number into variable a

    cout << "Enter second number: ";  // Ask user for the second number
    cin >> b;                         // Read the second number into variable b

    cout << "Sum: " << a + b << endl;          // Display the sum of a and b
    cout << "Difference: " << a - b << endl;   // Display the difference (a - b)
    cout << "Product: " << a * b << endl;      // Display the product (a * b)

    return 0;           // End the program successfully
}

