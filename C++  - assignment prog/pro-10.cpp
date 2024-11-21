// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;
class Calculator
{
private:
    int num1, num2;

public:
    Calculator(int _num1, int _num2)
    {
        num1 = _num1;
        num2 = _num2;
    }
    int add()
    {
        return num1 + num2;
    }
    int sub()
    {
        return num1 - num2;
    }
    int mul()
    {
        return num1 * num2;
    }
    int div()
    {
        return num1 / num2;
    }
};

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    Calculator c(num1, num2);
    
    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.sub() << endl;
    cout << "Multiplication: " << c.mul() << endl;
    cout << "Division: " << c.div() << endl;
}