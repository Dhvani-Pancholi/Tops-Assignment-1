<h4>What are conditional statements in C++? Explain the if-else and switch statements</h4>

 C++ supports the usual logical conditions from mathematics:

- Less than or equal to: a <= b
- Less than: a < b
- Greater than or equal to: a >= b
- Greater than: a > b
- Not Equal to: a != b
- Equal to a == b


<b> if-else : </b>

- Use if to specify a block of code to be executed, if a specified condition is true

- Use else to specify a block of code to be executed, if the same condition is false

- Use else if to specify a new condition to test, if the first condition is false

###### Syntax :

```cpp
if (condition1) {
  // code 
}
else if (condition2){
  // code 
}
else {
  // code
}
```

###### Example :
```cpp
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
```
<b> Switch-case : </b>
- Use switch to specify many alternative blocks of code to be executed

###### Syntax :

```cpp
switch(expression) {
  case 1:
    // code
    break;
  case 2:
    // code 
    break;
  default:
    // code 
}
```

###### Example :

```cpp
int main() {
    int day = 3;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
    }

    return 0;
}

```