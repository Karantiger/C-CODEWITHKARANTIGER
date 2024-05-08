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
