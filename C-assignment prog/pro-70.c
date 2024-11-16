// Accept 5 names from user at run time. 

#include<stdio.h>
void main(){
    int i,n;
    char name[5][20];
    for(i=0;i<5;i++)
    {
        printf("Enter name : ");
        scanf("%s",name[i]);
    }
    for(int i=0; i<5;i++){
        printf("%s\n",name[i]);
    }

}