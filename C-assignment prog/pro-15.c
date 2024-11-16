// Convert school’s name in abbreviated form

#include<stdio.h>

void main() {
 
  char school_name[10];
  printf("Enter The School Name:");
  scanf("%s",&school_name);

  printf("Abbreviated Name: ");
  printf("%c%c%c\n", school_name[0],school_name[1],school_name[2]);

}


