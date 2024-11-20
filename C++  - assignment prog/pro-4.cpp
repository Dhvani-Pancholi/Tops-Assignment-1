// WAP to create simple calculator using class

#include <iostream>

using namespace std;

class calculator
{

    int a;
    int b;

public:
    char op;
    void getdata()
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter operator (+,-,*,/): ";
        cin >> op;
    }
    int add()
    {
        return a + b;
    }
    int sub()
    {
        return a - b;
    }
    int mul()
    {
        return a * b;
    }
    int div()
    {
        return a / b;
    }

    void result()
    {
        switch (op)
        {
        case '+':
            cout << "Sum is: " << add() << endl;
            break;
        case '-':
            cout << "Subtraction is: " << sub() << endl;
            break;
        case '*':
            cout << "Multiplication is: " << mul() << endl;
            break;
        case '/':
            cout << "Division is: " << div() << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
        }
    }
};

int main()
{
    calculator c1;
    c1.getdata();
    c1.result();
}
