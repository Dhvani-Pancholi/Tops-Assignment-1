// WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
void main(){
  int n1 = 4, n2 = 54, n3 =32, min;
    min = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);

    printf("minimum number is %d",min);
}