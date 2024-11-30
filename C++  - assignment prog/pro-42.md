<h4>What are classes and objects in C++? Provide an example</h4>

<b>1. Classes</b>

- Class: A blueprint or template for creating objects. It defines data members (attributes) and member functions (methods).

<b>2. Objects</b>

- Object: An instance of a class or you can say Any entity that has state and behavior is known as an object. For example: chair, pen, table etc. It can be physical and logical

```cpp
class MyClass {       
  public:             
    int roll_no;        
    string name;  
};

int main() {
  MyClass m1;  

  m1.roll_no = 15; 
  m1.name = "dipali";


  cout << m1.roll_no << endl;
  cout << m1.name;
  return 0;
}
```