// Write a C++ program to implement a class called Circle that has privatemember variables for radius. Include member functions
// to calculate the circle's area and circumference. 

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getArea() {
        return 3.14 * radius * radius;
    }

    double getCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c;
    c.setRadius(3);
    cout << "Area: " << c.getArea() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;
    return 0;
}

