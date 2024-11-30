<h4> Explain nested control structures with an example.</h4>

<b> Nested Control Structures :</b>

- A nested control structure in C++ is when a control statement is placed inside another control statement. For example, a loop can be placed inside another loop, or an if-else statement can be placed inside another if-else statement

<b>Types of Nested Control Structures:</b>

- Nested if statements: An if statement inside another if statement.
- Nested loops: A loop inside another loop (e.g., a for loop inside another for loop).
- Nested if-else statements: An if or else inside another if or else.
```cpp

  if (age >= 18) {
    cout << "You are an adult";
    if (isStudent) {
      cout << "You are a student";
    } else {
      cout << "You are not a student";
    }
  } else {
    cout << "You are not an adult";
  }

````