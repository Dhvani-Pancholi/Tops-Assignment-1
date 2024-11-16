// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
void main(){
    float basic_salary,HRA,DA,gross_salary;
    printf("Enter your salary: ");
    scanf("%f", &basic_salary);

    if(basic_salary <= 10000){
        HRA = basic_salary*0.2;
        DA= basic_salary*0.8;
    }
    else if(basic_salary <= 20000){
        HRA = basic_salary*0.25;
        DA = basic_salary*0.9;
    }
    else{
        HRA = basic_salary*0.3;
        DA = basic_salary*0.95;

    }

    gross_salary = basic_salary + HRA + DA;
    printf("Gross salary is: %.2f", gross_salary);

}