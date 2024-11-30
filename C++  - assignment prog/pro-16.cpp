// 1. Grade Calculator
// Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 80)
        cout << "Grade: A";
    else if (marks >= 60)
        cout << "Grade: B";
    else if (marks >= 40)
        cout << "Grade: C";
    else
        cout << "Grade: D";
    return 0;
}
