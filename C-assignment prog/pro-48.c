// Write a C program to determine eligibility for admission to a professional course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or  
// Total in Maths and Physics >=140 -----Input the marks obtained in
// Physics :65 Input the marks obtained in Chemistry :51 Input the marks
// obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
// 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include<stdio.h>
void main(){
    int math,phy,chem,total,total_phy_math;

    printf("Enter the marks obtained in Physics: ");
    scanf("%d",&phy);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d",&chem);
    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d",&math);

    total = phy + chem + math;
    total_phy_math = phy + math;

    printf("Total marks of 3 subjects is: %d\n", total);
    printf("Total marks of Maths and Physics is: %d\n",total_phy_math);

    if (math >= 65 && phy >= 55 && chem >= 50 && total >= 190 || total_phy_math>=140){
        printf("candidate is eligible");
    }
    else{
        printf("candidate is not eligible");
    }
}