// Write a C++ program to create a class called Rectangle that has private member variables for length and width.
// Implement member functions to calculate the rectangle's area and perimeter

#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double _length, double _width)
    {
        length = _length;
        width = _width;
    }

    double Rectanglearea()
    {
        return length * width;
    }

    double Rectanglperimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{

    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle r1(length, width);

    cout << "Area of the rectangle: " << r1.Rectanglearea() << endl;
    cout << "Perimeter of the rectangle: " << r1.Rectanglperimeter() << endl;

    return 0;
}