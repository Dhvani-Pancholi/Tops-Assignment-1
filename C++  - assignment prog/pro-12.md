 <h4>What are the different data types available in C++? Explain with examples</h4>

<b> 1.Primitive Data Type </b>

- Integer
- Character
- string
- Bool
- Float
- Double 

<b> 2. Derived Data Type </b>

- Function
- Array
- Pointer

<b> 3. UserDefined data Type </b>

- Structure
- Class
- Enumeration
- Union


<h6>Example : Primitive Data Type </h6>


```cpp
    int a = 10;
    float b = 5.5;
    double c = 15.75;
    char d = 'A';
    string e = "Hello";


    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Double: " << c << endl;
    cout << "Character: " << d << endl;
    cout << "String: " << e << endl;

```
<h6>Example : Derived Data Type </h6>

```cpp 

function:

void myFunction() {
  cout << "Hello World";
}

int main() {
  myFunction(); 
  return 0;
}
```



```cpp
array : 

string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

for (int i = 0; i < 5; i++) {
  cout << cars[i] << "\n";
}
```


```cpp
pointer: 

string food = "Pizza";  
string* ptr = &food;   

cout << food << "\n";
cout << &food << "\n";
cout << ptr << "\n";
```

```cpp
structure:

struct {             
  int myNum;         
  string myString;
} myStructure;
```