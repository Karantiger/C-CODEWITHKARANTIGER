/* 2.Write a program that inputs three numbers and outputs the largest number using nested if-else statement */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Enter the value of C: ");
    scanf("%d", &c);
    if (a>b)
    {
        if (a>c)
        {
            printf("A is max");
        }
        
    }
    else
    {
        if (b>c)
        {
            printf("B is max");
        }

        else
        {
            printf("C is max");
        }
        
       
    }
    
     return 0;
}