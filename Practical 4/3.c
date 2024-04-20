// Write a program to print day of week name using switch case statement 
#include<stdio.h>
int main()
{
    int day, Choise;
    printf("Enter the days(1-7): ");
    scanf("%d",&day);
    printf("Week \n");
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. Saturday\n");
    printf("Week of day: ");
    scanf("%d", &Choise);
    switch (Choise)
    {
    case 1:
        printf("Sunday\n");
        break;
    
    case 2:
        printf("Monday\n");
        break;

    case 3:
        printf("Tuesday\n");
        break;

    case 4:
        printf("Wednesay\n");
        break;

    case 5:
        printf("Thursday\n");
        break;

    case 6:
        printf("Friday\n");
        break;

    case 7:
        printf("Saturday\n");
        break;
    
    default:
        printf("Not a valid day");
        break;
    }

}