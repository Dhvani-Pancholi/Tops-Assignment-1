// Calculate person’s insurance premium based on salary 

#include<stdio.h>
int main(){

    float premium,salary,insuranceRate;   

    printf("Enter person salary: ");
    scanf("%f",&salary);

    printf("Enter insuranceRate: ");
    scanf("%f",&insuranceRate);

    premium = salary*(insuranceRate/100);
    printf("Person insurance premium is : %.2f\n",premium);

    return 0;


}