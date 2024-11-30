// Operator Demonstration
// Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results


#include <iostream>
using namespace std;
int main(){
    int a, b;
    bool result;

    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;

    cout << "\nArithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl; 
    cout << "a - b = " << a - b << endl;  
    cout << "a * b = " << a * b << endl;  
    cout << "a / b = " << a / b << endl;  
    cout << "a % b = " << a % b << endl;  
    cout << endl;


    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;  
    cout << "a > b: " << (a > b) << endl;    
    cout << "a < b: " << (a < b) << endl;    
    cout << "a >= b: " << (a >= b) << endl; 
    cout << "a <= b: " << (a <= b) << endl;  
    cout << endl;

  
    cout << "Logical Operators:" << endl;
    result = (a > b) && (b > 0); 
    cout << "(a > b) && (b > 0): " << result << endl;

    result = (a > b) || (b < 0);
    cout << "(a > b) || (b < 0): " << result << endl;

    result = !(a == b); 
    cout << "!(a == b): " << result << endl;
    cout << endl;


    cout << "Bitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl; 
    cout << "a | b = " << (a | b) << endl;  
    cout << "a ^ b = " << (a ^ b) << endl;  
    cout << "~a = " << (~a) << endl;      
    cout << "a << 1 = " << (a << 1) << endl; 
    cout << "a >> 1 = " << (a >> 1) << endl;  
    cout << endl;

    return 0;

}