// Program for calculating tatal and average marks of three subjects --->

#include<stdio.h>
int main()
{
    int sub1,sub2,sub3, Total;
    float average;
    printf("Enter the marks of sub1 : ");
    scanf("%d", &sub1);

    printf("Enter the marks of sub2 :");
    scanf("%d", &sub2);

    printf("Enter the value of sub3 :");
    scanf("%d", &sub3); 

    Total=sub1+sub2+sub3;
    average=(float)Total/3;

    printf("Total=%d\n",Total);
    printf("Average=%f\n", average);
    return 0;
}