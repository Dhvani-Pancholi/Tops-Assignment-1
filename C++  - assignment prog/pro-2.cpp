// Write a C++ program that accepts user input for their name and age and then
// displays a personalized greeting

#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    cout << "enter your name: ";
    cin >> name;
    cout << "enter your age: ";
    cin >> age;
    cout << "Hi " << name << " You are " << age << " years old";
}