// 3. String Palindrome Check
// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards)

#include <iostream>
#include <string.h>

using namespace std;

void checkPalindrome(char *str1)
{
    int flag = 1;
    char str2[20];

    strcpy(str2, str1);
    strrev(str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "\nThis string is a Palindrome.";
    }
    else
    {
        cout << "\nThis string is not a Palindrome.";
    }
}

int main()
{
    char inputString[20];
    cout << "Enter a string: ";
    cin >> inputString;
    checkPalindrome(inputString);

    return 0;
}
