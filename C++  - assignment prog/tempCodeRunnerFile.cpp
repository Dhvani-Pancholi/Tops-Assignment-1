// Nested Control Structures
// Write a program that prints a right-angled triangle using stars (*) with a nested loop

#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop to print stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
