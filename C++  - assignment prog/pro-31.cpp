// 1. Array Sum and avg
// Write a C++ program that accepts an array of integers, calculates the sum and
// avg, and displays the results
#include <iostream>
using namespace std;

int main()
{

    int sum = 0, avg = 0;
    int num[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> num[i];
        sum = sum + num[i];
    }
    avg = sum / 3;

    cout << "Sum of 3 numbers: " << sum << endl;
    cout << "Average of 3 numbers: " << avg << endl;

    return 0;
}
