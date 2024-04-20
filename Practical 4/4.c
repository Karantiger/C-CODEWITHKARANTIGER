// write a program to print number of days in a month using a switch case statement
#include<stdio.h>
int main()
{
    int month;
    printf("Month of the years");
    printf("1. January\n");
    printf("2. February\n");
    printf("3. March\n");
    printf("4. April\n");
    printf("5. May\n");
    printf("6. June\n");
    printf("7. July\n");
    printf("8. August\n");
    printf("9. September\n");
    printf("10. October\n");
    printf("11. November\n");
    printf("12. December\n");
    printf("-------------------------------\n");
    printf("Enter the month: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("January with 31 days\n");
        break;
    
    case 2:
        printf("Feburary with 28 & 29 days\n");
        break;

    case 3:
        printf("March with 31 days\n");
        break;
    
    case 4:
        printf("April with 30 days\n");
        break;

    case 5:
        printf("May with 31 days\n");
        break;

    case 6:
        printf("June with 30 days\n");
        break;

    case 7:
        printf("July with 31 days\n");
        break;

    case 8:
        printf("August with 31 days\n");
        break;

    case 9:
        printf("September with 30 days\n");
        break;

    case 10:
        printf("October with 31 days\n");
        break;
    
    case 11:
        printf("November with 30 days\n");
        break;
    
    case 12:
        printf("December with 31 days\n");
        break;

    default:
        printf("Not a valid month\n");
        break;
    }
    return 0;
}