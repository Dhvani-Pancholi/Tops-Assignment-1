// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>
float add(float, float);
float sub(float, float);
float Mul(float, float);
float div(float, float);

void main()
{
    int choice;
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    do
    {
        printf("1.Addition\n");
        printf("2.Subtractionn\n");
        printf("3,Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 5)
        {
            printf("You Exit");
            break;
        }
        switch (choice)
        {
        case 1:
            add(num1, num2);
            break;
        case 2:
            sub(num1, num2);
            break;
        case 3:
            Mul(num1, num2);
            break;
        case 4:
            div(num1, num2);
            break;
        default:
            printf("Invalid input");
            break;
        }

    } while (1);
}

float add(float num1, float num2)
{
    float res;
    res = num1 + num2;
    printf("sum of given numbers %.2f\n", res);
}
float sub(float num1, float num2)
{
    float res;
    res = num1 - num2;
    printf("sub of given numbers %.2f\n", res);
}
float Mul(float num1, float num2)
{
    float res;
    res = num1 * num2;
    printf("multiplication of given numbers %.2f\n", res);
}
float div(float num1, float num2)
{
    float res;
    res = num1 / num2;
    printf("division of given numbers %.2f\n", res);
}
