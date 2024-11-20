//Find character value from ascii 

#include<stdio.h>

void main(){

    int ascii_value;
    
    printf("Enter an Ascii value : ");
    scanf("%d", &ascii_value);

    char c = (char)ascii_value;
    printf("Character value from ascii is: %c\n",c);
}