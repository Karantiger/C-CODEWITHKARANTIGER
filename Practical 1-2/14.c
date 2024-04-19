// Program operation for nested  if else statement(Maximum)
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);
    printf("Enter the value of C :");
    scanf("%d",&c);
    printf("Enter the value of D :");
    scanf("%d",&d);

    if (a<b)
    {
        if (a<c)
        {
            if (a<d)
            {
                printf("A is min");
            }
            else
            {
                printf("D is min");
            }
            
        }
        else
        {
            if (c<d)
            {
                printf("C is min");
            }

            else
            {
                printf("D is min");
            }
            
        }
         
    }
    else
    {
        if (b<c)
        {
            if (b<d)
            {
                printf("B is min");
            }
            else
            {
                printf("D is min");
            }
            
        }
        else
        {
            if (b<c)
            {
                printf("B is min");
            }

            else
            {
                printf("C is min");
            }
            
        }
        
        
    }

    return 0;
    
}