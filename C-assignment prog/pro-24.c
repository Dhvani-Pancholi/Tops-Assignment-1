// Accept 5 employees name and salary and count average and total salary 

#include<stdio.h>
void main(){
    float salary1,salary2,salary3,salary4,salary5,average,total;

    char num1[10],num2[10],num3[10],num4[10],num5[10];

    printf("enter employee1 name: ");
    scanf("%s",&num1);
    printf("enter salary:");
    scanf("%f",&salary1);

    printf("enter employee2 name: ");
    scanf("%s",&num2);
    printf("enter salary:");
    scanf("%f",&salary2);

    printf("enter employee3 name: ");
    scanf("%s",&num3);
    printf("enter salary:");
    scanf("%f",&salary3);

    printf("enter employee4 name: ");
    scanf("%s",&num4);
    printf("enter salary:");
    scanf("%f",&salary4);

    printf("enter employee5 name: ");
    scanf("%s",&num5);
    printf("enter salary:");
    scanf("%f",&salary5);

    total = salary1 + salary2 + salary3 + salary4 + salary5;
    printf("Total salary of employee is: %f\n",total);
    average = total/5;
    printf("Average salary of employee is: %f\n",average);


}