<h4>What is a function in C++? Explain the concept of function declaration, definition, and calling.</h4>

- A function is a block of code which only runs when it is called.

- You can pass data, known as parameters, into a function.

- Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

<b> Call a function </b>

- To call a function, write the function's name followed by two parentheses () and a semicolon ;

<b>function Declaration and Definition</b>

- Declaration: the return type, the name of the function, and parameters 
- Definition: the body of the function 

```cpp

// Function declaration
void myFunction();

int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
```