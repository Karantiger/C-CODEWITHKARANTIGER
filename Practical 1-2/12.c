// program for area of square

#include<stdio.h>
int main()
{
    int area, side;
    printf("Enter the value of side:");
    scanf("%d", &side);

    area=side*side;
    printf("Area of square =%d\n",area);

    return 0;        
}