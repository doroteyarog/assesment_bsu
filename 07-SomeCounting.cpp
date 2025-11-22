#include <iostream>
using namespace std;

// Function to print a loop
void countLoop(int start, int end, int step) {
    for (int i = start; (step > 0 ? i <= end : i >= end); i += step) {
        cout << i << " ";
    }
    cout << endl << endl;
}

int main() {

    cout << "Counting up from 0 to 50:" << endl;
    countLoop(0, 50, 1);

    cout << "Counting down from 50 to 0:" << endl;
    countLoop(50, 0, -1);

    cout << "Counting up from 30 to 50:" << endl;
    countLoop(30, 50, 1);

    cout << "Counting down from 50 to 10 (step -2):" << endl;
    countLoop(50, 10, -2);

    cout << "Counting up from 100 to 200 (step +5):" << endl;
    countLoop(100, 200, 5);

    return 0;
}
