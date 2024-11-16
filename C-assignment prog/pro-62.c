// WAP to take 10 no. Input from user find out below values
// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd numbers

#include <stdio.h>
void main()
{
  int num[10];
  int even_count = 0, odd_count = 0, even_sum = 0, odd_sum = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Enter the number:");
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < 10; i++)
  {
    if (num[i] % 2 == 0)
    {
      even_count++;
      even_sum += num[i];
    }
    else
    {
      odd_count++;
      odd_sum += num[i];
    }
  }
  printf("even count is :%d\n", even_count);
  printf("odd count is :%d\n", odd_count);
  printf("even sum is :%d\n", even_sum);
  printf(" odd sum is :%d\n", odd_sum);
}
