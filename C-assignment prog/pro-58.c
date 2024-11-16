// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill


#include<stdio.h>
void main(){
    int units;
    float bill, surcharge, total_bill;

    printf("Enter the number of electricity units: ");
    scanf("%d", &units);
    
    if(units <= 50){
    bill = units * 0.50;
    }
    else if(units <= 150){
       bill = 25 + ((units - 50)) * 0.75;
    }
    else if(units <= 250){
        bill = 100 + ((units - 150)) * 1.20;
    }
    else{
        bill = 220 + ((units - 250)) * 1.50;
    }

    surcharge = bill * 0.20;
    total_bill = bill + surcharge;
    printf("Total electricity bill : %.2f\n",total_bill);

}
