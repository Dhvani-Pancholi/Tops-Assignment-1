// Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address and age
// b. Write a program of structure for five employee that
// provides the following information -print and display
// empno, empname, address andage

#include <stdio.h>

// a. information -print and display empno, empname, address and age

struct employee
{
  int empno;
  char empname[10];
  char address[30];
  int age;
};

void main()
{

  struct employee p1;
  p1.empno = 1;

//   printf("\nEnter your name:");
//   gets(p1.empname);
//   printf("\nEnter your address:");
//   scanf(" %s", &p1.address);
//   printf("\nEnter your age:");
//   scanf("%d", &p1.age);

//   printf("\nempno: %d", p1.empno);
//   printf("\nEmployee Name: %s", p1.empname);
//   printf("\nAddress: %s", p1.address);
//   printf("\nAge: %d", p1.age);



//  b. Write a program of structure for five employee that provides the following information -print and display
// empno, empname, address and age


  struct employee employees[5];

  for (int i = 0; i < 5; i++)
  {
    employees[i].empno = i + 1;
    printf("\n--- Employees %d ---", i + 1);
    printf("\nEnter your name:");
    scanf(" %s", &employees[i].empname);
    printf("\nEnter your address:");
    scanf(" %s", &employees[i].address);
    printf("\nEnter your age:");
    scanf("%d", &employees[i].age);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("\n--- employees %d ---", i + 1);
    printf("\nempno: %d", employees[i].empno);
    printf("\nempname: %s", employees[i].empname);
    printf("\naddress: %s", employees[i].address);
    printf("\nage: %d", employees[i].age);
  }
}