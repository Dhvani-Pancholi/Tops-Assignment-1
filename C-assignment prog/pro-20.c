// Accept monthly salary from the user and deduct 10% insurance premium, 
// 10% loan installment find out of remaining salary. 

#include<stdio.h>2
void main(){
    float salary,insurance_premium,loan,remaining_salary;
    printf("Enter your monthly salary: ");
    scanf("%f",&salary);

    insurance_premium = salary * 0.1;
    salary = salary - insurance_premium;
    loan = salary * 0.1;

    salary = salary - loan;
    printf("Remaining salary is : %.2f\n",salary);
    
}