/*Write a C program to generate prime numbers between 1 to n.*/

#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    if (count==2)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a Prime number\n");
    }
    return 0;
}

/*Output

Enter the number:6
Not a Prime number

Enter the number:5
Prime number

=== Code Execution Successful ===
*/
