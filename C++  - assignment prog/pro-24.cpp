// 1. Simple Calculator Using Functions
// Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input

#include <iostream>
using namespace std;

float add(float, float);
float sub(float, float);
float Mul(float, float);
float div(float, float);

int main()
{
    int choice;
    float num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    do
    {
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "You Exit\n";
            break;
        }

        switch (choice)
        {
        case 1:
            cout << "Sum of given numbers: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Subtraction of given numbers: " << sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Multiplication of given numbers: " << Mul(num1, num2) << endl;
            break;
        case 4:
            cout << "Division of given numbers: " << div(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input\n";
            break;
        }

    } while (true);

    return 0;
}

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float Mul(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    return num1 / num2;
}
