<h4>How are arrays initialized in C++? Provide examples of both 1D and 2D arrays.</h4>

<b>1. One-Dimensional Arrays</b>

1D arrays are declared by specifying the type, name, and size of the array. They can be initialized with or without explicitly specifying their size

```cpp
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
```

<b>2. Two-Dimensional Arrays</b>

2D arrays are declared with two size parameters representing rows and columns. They are initialized using nested braces or by flattening the data into a single list.

```cpp
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[0][2];
```