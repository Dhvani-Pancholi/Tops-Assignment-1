// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include<stdio.h>

void inputMat();
void multiplymatrix();
void addmatrix();
void submatrix();

    int matrix1[2][2];
    int matrix2[2][2];
    int matrix3[2][2];

int main()
{
    inputMat();
    printf("\n");
    printf("\n1.Addition of Matrix");
    printf("\n2.Subtraction of Matrix");
    printf("\n3.Multiplication of Matrix");

    int operation;
    printf("\nEnter your operation : ");
    scanf("%d",&operation);

    if(operation==1)
    {
        addmatrix();
    }
    else if (operation==2)
    {
        submatrix();
    }
    else if (operation==3)
    {
        multiplymatrix();
    }
    else
    {
        printf("Invalid Operation");
    }
    return 0;
}

void inputMat()
{

    printf("\n--MATRIX: 1--\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",matrix1[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
    }  

    printf("\n--MATRIX: 2--\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter Element : ");
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",matrix2[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }     
    } 
}

void multiplymatrix()
{
    
    matrix3[0][0]=(matrix1[0][0]*matrix2[0][0])+(matrix1[0][1]*matrix2[1][0]);
    matrix3[0][1]=(matrix1[0][0]*matrix2[0][1])+(matrix1[0][1]*matrix2[1][1]);
    matrix3[1][0]=(matrix1[1][0]*matrix2[0][0])+(matrix1[1][1]*matrix2[1][0]);
    matrix3[1][1]=(matrix1[1][0]*matrix2[0][1])+(matrix1[1][1]*matrix2[1][1]);

     printf("\n-----Multiplication of Matrix----------\n\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",matrix3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
    
}

void addmatrix()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("\n--Addition of Matrix--\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",matrix3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }   
}

void submatrix()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
    printf("\n--Subtraction of Matrix--\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d\t",matrix3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
        
    }
}