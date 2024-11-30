// Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task

#include <iostream>
using namespace std;

// pop

// double calculateArea(double length, double width)
// {
//     return length * width;
// }

// int main()
// {
//     double length, width;

//     cout << "Enter length: ";
//     cin >> length;
//     cout << "Enter width: ";
//     cin >> width;

//     cout << "Area of the rectangle: " << calculateArea(length, width) << endl;

//     return 0;
// }

// oop

class Rectangle
{
    double length;
    double width;

public:
    Rectangle(double _length, double _width)
    {
        length = _length;
        width = _width;
    }

    double calculateArea()
    {
        return length * width;
    }

    void displayArea()
    {
        cout << "The area of the rectangle is: " << calculateArea() << endl;
    }
};

int main()
{
    double length, width;

    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;

    Rectangle r(length, width);
    r.displayArea();

    return 0;
}