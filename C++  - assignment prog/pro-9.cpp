// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;

inline int multiply(int a, int b)
{
    return a * b;
}

inline int cube(int x)
{
    return x * x * x;
}

int main()
{
    int n1, n2, n;

    cout << "Enter two numbers for multiplication: ";
    cin >> n1 >> n2;

    cout << "Multiplication of given value is: " << multiply(n1, n2) << endl;

    cout << "Enter a number for cube: ";
    cin >> n;

    cout << "Cube of given value is: " << cube(n) << endl;

    return 0;
}
