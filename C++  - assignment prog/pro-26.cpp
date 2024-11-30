// 3. Variable Scope
// Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.

#include <iostream>

using namespace std;

int global = 30;

int show_local()
{
    int local = 10;
    cout << endl;
    cout << " Local variable: " << local << endl;
    cout << " Global variable: " << global << endl;
}
int main()
{
    //  next line will raise error because localvariable is not accessible here
    // std::cout << " this is local from main : " << local << endl ;
    cout << "Global variable from main function : " << global << endl;

    show_local();

    return 0;
}