/*
8.Write a Program to Calculate Wages:
Hours	Rate/Hour
First 8	40
Next 4	10
Next 4	20
Next 4	30
Next 4	40*/
#include<stdio.h>
int main()
{
    int hours;
    printf("Enter the hours: ");
    scanf("%d",&hours);

    if (hours<=8)
    {
        printf("%d\n", hours*40);
    }
    else if (hours<=12)
    {
        printf("%d\n",320+(hours-8)*10);
    }
    else if (hours<=16)
    {
        printf("%d\n",320+40+(hours-12)*20);
    }
    else if (hours<=20)
    {
        printf("%d\n",320+40+80+(hours-16)*30);
    }
    else
    {
        printf("%d\n",320+40+80+120+(hours-20)*40);
    }
    
    return 0;
}

