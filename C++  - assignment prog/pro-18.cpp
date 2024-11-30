// 3. Multiplication Table
// Write a C++ program to display the multiplication table of a given number using a for loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Table of " << n << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}