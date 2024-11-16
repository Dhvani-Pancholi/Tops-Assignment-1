// Convert temperature Fahrenheit to Celsius 
#include<stdio.h>
int main(){

    float Fahrenheit,Celsius;

    printf("Enter temp in Fahrenheit Value:");
    scanf("%f",&Fahrenheit);

    Celsius=(Fahrenheit-32)/1.8;
    printf("Fahrenheit to Celsius temp is: %f",Celsius);
    return 0;
}