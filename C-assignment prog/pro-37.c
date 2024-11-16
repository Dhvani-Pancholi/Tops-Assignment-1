// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include <stdio.h>

int main()
{
    char operator;
    double a, b, res;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter first numbers: ");
    scanf("%lf", &a);

    printf("Enter second numbers: ");
    scanf("%lf", &b);

    switch (operator)
    {
    case '+':
        res = a + b;
        printf("sum of given numbers %lf\n", res);
        break;
    case '-':
        res = a - b;
        printf("subtraction of given numbers %lf\n", res);
        break;
    case '*':
        res = a * b;
        printf("multiplication of given numbers %lf\n", res);
        break;
    case '/':

        res = a / b;
        printf("division of given numbers %lf\n", res);
        break;
    case '%':
        res = (int)a % (int)b;
        printf("modulo of given numbers: %lf\n", res);
        break;
    default:
        printf("You Entered Incorrect Operator\n");
    }
    return 0;
}
