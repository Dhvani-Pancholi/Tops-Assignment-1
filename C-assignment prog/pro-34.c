// Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>

void main() {
    int num1; 
    int num2;

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    if (num1==num2)
        printf("The number is equal");
    else
        printf("The number is not equal");
    
}