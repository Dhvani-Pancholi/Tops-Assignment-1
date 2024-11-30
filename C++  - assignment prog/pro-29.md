<h4>Explain recursion in C++ with an example</h4>

- Recursion in C++ is a technique in which a function calls itself repeatedly until a given condition is satisfied. In other words, recursion is the process of solving a problem by breaking it down into smaller, simpler sub-problems.

- Recursion performs a number of repetitive calls to the function from within the function. The recursive condition performs the repeating calls to the function until the base case is met.The base case is present inside the function, and once the condition of the base case is satisfied, it stops the execution.

<b> Recursive Function</b>
- A function that calls itself is called a recursive function. When a recursive function is called, it executes a set of instructions and then calls itself to execute the same set of instructions with a smaller input. This process continues until a base case is reached, which is a condition that stops the recursion and returns a value

<b>Example</b>

```cpp
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

````