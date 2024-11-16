// Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
void main() {
    int cost_price,selling_price,profit,loss; 

    printf("Enter the selling price:");
    scanf("%d", &selling_price);

    printf("Enter the cost price:");
    scanf("%d", &cost_price);

    if(selling_price > cost_price){
        profit = selling_price - cost_price;
        printf("It's Profit : %d\n",profit);
    } 
    else if (cost_price  > selling_price){
        loss = cost_price - selling_price;
        printf("It's loss :  %d\n", loss);
    }

}
