// Write a C++ program to create a class called Person that has private member variables for name, age and country.
// Implement member functions to set and get the values of these variables

#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
    string country;

public:
    void setname(string _name)
    {
        name = _name;
    }
    void setage(int _age)
    {
        age = _age;
    }
    void setcountry(string _country)
    {
        country = _country;
    }

    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    string getcountry()
    {
        return country;
    }
};
int main()
{
    person p1;
    p1.setname("jethalal gada");
    p1.setage(48);
    p1.setcountry("Mumbai");

    cout << "Name: " << p1.getname() << endl;
    cout << "Age: " << p1.getage() << endl;
    cout << "Country: " << p1.getcountry() << endl;
    return 0;
}