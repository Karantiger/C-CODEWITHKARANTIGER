#include<stdio.h>
int main()
{
    int i, start, end, even=0, odd=0, sum_even=0, sum_odd=0;
    printf("Enter the start number: ");
    scanf("%d",&start);
    printf("Enter the end number: ");
    scanf("%d",&end);

    printf("Even nos:\n");
    for ( i = start; i <= end; i++)
    {
        if (i%2==0)
        {
            even++;
            printf("%d\t",i);
            sum_even=sum_even+i;
        }
        
    }
    printf("\n");
    printf("Total even nos: %d\n", even);
    printf("Sum of even nos: %d\n", sum_even);
    

        printf("odd nos:\n");
    for ( i = start; i <= end; i++)
    {
        if (i%2!=0)
        {
            odd++;
            printf("%d\t",i);
            sum_odd=sum_odd+i;
        }
        
    }
    printf("\n");
    printf("Total odd nos: %d\n", odd);
    printf("Sum of odd nos: %d\n", sum_odd);
    return 0;
}