<h4>What is inheritance in C++? Explain with an example</h4>

<b> Inheritance : </b>

- Inheritance allows a class (derived class) to inherit attributes and methods from another class (base class), promoting code reuse.

Types of inheritance in C++:

- Single inheritance
- Multiple inheritance
- Multilevel inheritance
- Hierarchical inheritance
- Hybrid inheritance

```cpp
 Example :

class Person
{
    string name;
    string college;

public:
    Person(string _name, string _college)
    {
        name= _name;
        college = _college;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "College: " << college << endl;
    }
};

class Student : public Person
{
private:
    int roll_no;

public:
    Student(string _name, string _college, int _roll_no) : Person(_name, _college), roll_no(_roll_no) 
    {
        _name=_name;
        _college=_college;
        _roll_no = _roll_no;
    }

    void display()
    {
        Person::display();
        std::cout << "Roll No: " << roll_no << endl;
    }
};

class Teacher : public Person
{
private:
    string department;

public:
    Teacher(string _name, string _college, string _department) : Person(_name, _college), department(_department)
    {
        _name=_name;
        _college = _college;
        _department=_department;
    }

    void display()
    {
        Person::display();
        std::cout << "Department: " << department << std::endl;
    }
};

int main()
{
    Student student("Dhvani", "Vvp", 1);
    Teacher teacher("Dishita", "Vvp", "IT");

    std::cout << "Student Information:" << endl;
    student.display();
    std::cout << endl;

    std::cout << "Teacher Information:" << endl;
    teacher.display();

    return 0;
}
```