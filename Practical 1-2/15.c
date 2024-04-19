#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, Total;
    float avg;
    printf("Enter the marks od subject_1 =");
    scanf("%d",&sub1);
    
    printf("Enter the marks od subject_2 =");
    scanf("%d",&sub2);
    
    printf("Enter the marks od subject_3 =");
    scanf("%d",&sub3);
    
    Total=sub1+sub2+sub3;
    avg=(float)Total/3;

    if (avg>70)
    {
        printf("Excellent");
    }

    else if(avg>60)
    {
        printf("Very good");
    }

    else if (avg>50)
    {
        printf("Good");
    }

    else
    {
        printf("Fail");
    }
    
    return 0;

}