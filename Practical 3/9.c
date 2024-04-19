/*9.Write a program that inputs four numbers and outputs the largest number using else-if ladder statement.*/
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Enter the value of C: ");
    scanf("%d",&c);
    printf("Enter the value of D: ");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("A is max");
    }
    else if (b>a && b>c && b>d)
    {
        printf("B is max");
    }
    else if (c>a && c>b && c>d)
    {
        printf("C is max");
    }
    else
    {
        printf("D is max");
    }
    
    return 0;
}