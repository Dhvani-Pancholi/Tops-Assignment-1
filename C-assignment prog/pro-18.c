//  Calculate person’s Annual salary

#include<stdio.h>

int main(){

    int salary;
    printf("Enter monthly salary:");
    scanf("%d",&salary);
    int person=salary*12;
    printf("Person Annual Salary is: %d",person);
    return 0;
}