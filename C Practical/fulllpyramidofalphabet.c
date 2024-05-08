/*Write a C program to print the full pyramid pattern of alphabets.*/

#include<stdio.h>
int main()
{
    int i,j,k;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}