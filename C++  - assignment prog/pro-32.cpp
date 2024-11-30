// 2. Matrix Addition
// Write a C++ program to perform matrix addition on two 2x2 matrices.

#include <iostream>

using namespace std;

int a[2][2], b[2][2], sum[2][2];

void input_matrix()
{

    cout << "\n-----MATRIX: 1-----\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter Element : ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cout << "\t" << a[i][j];
            if (j == 1)
            {
                cout << endl;
            }
        }
    }

    cout << "\n-----MATRIX: 2-----\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter Element : ";
            cin >> b[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "\t" << b[i][j];
            if (j == 1)
            {
                cout << endl;
            }
        }
    }
}
void addition()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "\n-----Addition of Matrix-----\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cout << "\t" << sum[i][j];
            if (j == 1)
            {
                cout << endl;
            }
        }
    }
}
int main()
{
    input_matrix();
    addition();

    return 0;
}