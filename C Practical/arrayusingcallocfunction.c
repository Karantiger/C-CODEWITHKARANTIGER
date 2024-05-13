/*Write a C program to Display array elements using calloc ( ) function.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *p;
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    free(p);
    return 0;
}


/*output*/
/*
Enter the number of elements: 5
1
2
3
4
5


1
2
3
4
5
=== Code Execution Successful ===
*/
