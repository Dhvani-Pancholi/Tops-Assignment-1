// Type Conversion
// Write a C++ program that performs both implicit and explicit type conversions and
// prints the results
#include <iostream>
using namespace std;

int main()
{

    int a;
    double b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Implicit type conversion : " << a + b << endl;

    cout << "Explicit type conversion : " << static_cast<int>(b) + a << endl;

    return 0;
}
