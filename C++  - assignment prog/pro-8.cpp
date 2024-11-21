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
    void setperson(string _name,int _age,string _country)
    {
        name = _name;
         age = _age;
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
    p1.setperson("jethalal gada",48,"mumbai");

    cout << "Name: " << p1.getname() << endl;
    cout << "Age: " << p1.getage() << endl;
    cout << "Country: " << p1.getcountry() << endl;
    return 0;
}