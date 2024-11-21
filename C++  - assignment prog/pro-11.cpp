// Write a C++ program to create a class called Car that has private member variables for company, model, and year.
//  Implement member functions to get and set these variables

#include <iostream>
using namespace std;

class Car
{
private:
    string company;
    int model;
    int year;

public:
    void setcar(string _company, int _model, int _year)
    {
        company = _company;
        model = _model;
        year = _year;
    }

    string getcompany()
    {
        return company;
    }
    int getmodel()
    {
        return model;
    }
    int getyear()
    {
        return year;
    }
};

int main()
{
    Car c1;
    c1.setcar("Ford", 123, 2000);

    cout << "company: " << c1.getcompany() << endl;
    cout << "model: " << c1.getmodel() << endl;
    cout << "year: " << c1.getyear() << endl;
    return 0;
}