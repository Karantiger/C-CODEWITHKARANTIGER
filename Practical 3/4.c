/* 4.Write a Program to enter student marks and find percentage and grade system using Else-if Ladder Statement. */
#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, percentage, grade;
    printf("Enter the marks of Subject1: ");
    scanf("%d",&sub1);
    printf("Enter the marks of Subject2: ");
    scanf("%d",&sub2);
    printf("Enter the marks of Subject3: ");
    scanf("%d",&sub3);
    percentage=(sub1+sub2+sub3)/3;
    
    if (percentage>=80)
    {
        printf("Grade A");
    }
    else if (percentage<=80 && percentage>=60)
    {
        printf("Grade B");
    }
    else if (percentage<=60 && percentage>=40)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");

    }
     
    return 0;
}