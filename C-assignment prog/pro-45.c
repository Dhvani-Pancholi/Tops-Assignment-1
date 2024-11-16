// WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>
void main()
{
  int n1 = 45, n2 = 65, n3 = 76, max;
  max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

  printf("maximum number is %d", max);
}