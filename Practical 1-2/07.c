//Swapping Program operation without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    // Input data type
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);

    // Before Swapping
    printf("Before Swapping");
    printf("The value of A is %d\n",a);
    printf("The value of B is %d\n",b);

    //Operation perform
    a=a+b;
    b=a-b;
    a=a-b;

    //After swapping
    printf("After Swapping");
    printf("The value of A is %d\n",a);
    printf("The value of B is %d\n",b);
    return 0;
}
