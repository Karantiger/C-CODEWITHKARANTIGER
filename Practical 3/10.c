/* 10.Write a program to perform arithmetic operation with using else if ladder statement. */
#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter the user choice: ");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("Addition of two number is=%d\n", a+b);
    }
    else if (choice==2)
    {
        printf("Subtraction of two number is=%d\n", a-b);
    }
    else if (choice==3)
    {
        printf("Multiplication of two number is=%d\n", a*b);
    }
    else if (choice==4)
    {
        printf("Division of two number is=%d\n", a/b);
    }
    else
    {
        printf("Modulus of two number is=%d\n", a%b);
    }
    return 0;
    
}

