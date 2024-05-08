/*Write a C program to find factorial of a given integer using recursive function.*/

#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter a number:");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d",n,f);
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

/*
Output:
Enter a number:5
Factorial of 5 is 120
*/

/*
Enter a number:6
Factorial of 6 is 720

*/

/*
Enter a number:7
Factorial of 7 is 5040


*/

/*
Enter a number:8
Factorial of 8 is 40320

*/