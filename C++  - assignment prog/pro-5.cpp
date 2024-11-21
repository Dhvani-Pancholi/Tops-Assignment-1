// 2. Define a class to represent a bank account. Include the following members:
// Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
// Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance

#include <iostream>
#include <string>
using namespace std;

class Bankaccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignValues(string _name, int _accountNumber, string _accountType, double _balance)
    {
        name = _name;
        accountNumber = _accountNumber;
        accountType = _accountType;
        balance = _balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully : " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn successfully : " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Balance:" << balance << endl;
    }
};

int main()
{
    Bankaccount account;

    account.assignValues("Daya Gada", 123456, "Savings", 40000);

    account.display();

    account.deposit(4000);

    account.withdraw(1000);

    account.display();

    return 0;
}
