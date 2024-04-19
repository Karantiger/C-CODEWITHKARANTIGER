// Program for area of triangle
#include<stdio.h>
int main()
{
    int area,b,h;
    printf("Enter the breadth of triangle :");
    scanf("%d",&b);
    printf("Enter the height of triangle :");
    scanf("%d",&h);
    area=(1.0/2.0)*b*h;
    printf("Area of triangle = %d\n",area);
    return 0;
}