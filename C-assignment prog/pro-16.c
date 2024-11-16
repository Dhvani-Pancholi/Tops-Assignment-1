// Convert country’s name in abbreviate form

#include<stdio.h>
void main(){

  char country_name[8];
  printf("Enter The Country Name:");
  scanf("%s",&country_name);

  printf("Abbreviated Name: ");
  printf("%c%c%c\n", country_name[0],country_name[1],country_name[2]);
}