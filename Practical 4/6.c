// write a program to find maximum number using switch case satement
#include<stdio.h>
int main()
{
    int num1, num2, ans;
    printf("Enter the two number: ");
    scanf("%d %d", &num1, &num2);
    ans=num1>num2? 1:0;
    switch (ans)
    {
    case 1:
        printf("Num1 is max\n", num1);
        break;
    
    case 0:
        printf("Num2 is max\n", num2);
        break;
        
    default:
        printf("Both number are equal\n");
        break;
    }
    return 0;

}