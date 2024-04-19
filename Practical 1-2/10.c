//Program opertaion of simple if

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);

    if (a>b)
    {
        printf("A is max");
    }

    if (a<b)
    {
        printf("B is max");
    }

    if (a==b)
    {
        printf("Both are same");
    }
    return 0;
    
    
    
}