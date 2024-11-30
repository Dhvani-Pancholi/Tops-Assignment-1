// 1. Variables and Constants
// Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them.

#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    float b = 5.5;
    double c = 15.75;
    char d = 'A';
    string e = "Hello";

    const float PI = 3.14;

    a += 5;
    b *= 2;
    c -= 10;

    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Double: " << c << endl;
    cout << "Character: " << d << endl;
    cout << "String: " << e << endl;

    float r = 3.0;
    float circleArea = PI * r * r;
    cout << "Area of a circle is : " << circleArea << endl;

    return 0;
}