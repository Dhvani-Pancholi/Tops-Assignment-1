// WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>
void main()
{
  int n1, n2, n3, max;

  printf("Enter the first number: ");
  scanf("%d", &n1);
  printf("Enter the second number: ");
  scanf("%d", &n2);
  printf("Enter the third number: ");
  scanf("%d", &n3);

  max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

  printf("The maximum number is %d\n", max);
}