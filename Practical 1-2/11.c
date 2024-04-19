// Program operation for nested  if else statement(Minimum)

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A:");
    scanf("%d",&a);

    printf("Enter the value of B:");
    scanf("%d",&b);

    printf("Enter the value of C:");
    scanf("%d",&c);
    
    if (a>b)
    {
        if (a<c)
        {
            printf("A is min");
        }

        else
        {
            printf("C is min");
        }
               
    }
   
    else
    {
        if (a<b)
        {
            printf("A is min");
        }
        else
        {
            printf("B is min");
        }
        
        
    }
    
    return 0;
}