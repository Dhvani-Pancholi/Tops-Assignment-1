// What are the main input/output operations in C++? Provide example

// cout:
// It is used to produce output on the standard output device which is usually the display screen.
// The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).

// cin:
// The extraction operator(>>) is used along with the object cin for reading inputs.
// The extraction operator extracts the data from the object cin which is entered using the keyboard.

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Multiplication of the numbers is: " << a * b << endl;
    return 0;
}