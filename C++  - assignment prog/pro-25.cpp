// 2. Factorial Calculation Using Recursion
// Write a C++ program that calculates the factorial of a number using recursion

#include <iostream>

using namespace std;

int fact(int num)
{
    if (num > 1)
    {
        num *= fact(num - 1);
        return num;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;

    cout << "Enter your number : ";
    cin >> num;

    cout << "Factorial of given number is : " << fact(num);
    return 0;
}