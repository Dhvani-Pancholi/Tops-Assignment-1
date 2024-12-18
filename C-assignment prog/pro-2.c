// Write a program to make Simple calculator (to make addition, subtraction,
// multiplication, division and modulo)

#include<stdio.h>

void main(){
   int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("The sum of given number is %d\n",a+b);
    printf("The subtraction of given number is %d\n",a-b);
    printf("The multiplication of given number is %d\n",a*b);
    printf("The division of given number is %d\n",a/b);
    printf("The modulo of given number is %d\n",a%b);
}