/*Write a C program to find sum and average of three numbers.*/
#include<stdio.h>
int main()
{
    int a,b,sum,avg,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    avg=sum/3;

    printf("Sum of three numbers is: %d\n",sum);
    printf("Average of three numbers is:  %d",avg);

    return 0;
}
/*Output
Enter three numbers: 
56
87
98
Sum of three numbers is: 241
Average of three numbers is:  80

=== Code Execution Successful ===
*/
