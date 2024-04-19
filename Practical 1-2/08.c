// Swapping program using third variable
#include<stdio.h>
int main()
{
    int a,b,c;
    //input data type
    printf("Enter the value of A:");
    scanf("%d", &a);

    printf("Enter the value of B:");
    scanf("%d", &b);

    //Before swapping
    printf("Before Swapping\n");
    printf("The value of A is %d\n",a);
    printf("The value of B is %d\n",b);

    //Operation perform
    c=a+b;
    b=c-b;
    a=c-b;

    //After Swapping
    printf("After swapping\n");
    printf("The value of A is %d\n", a);
    printf("The value of B is %d\n",b);
    return 0;   
}