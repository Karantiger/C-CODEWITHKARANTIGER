// Program for convert days into yrs
#include<stdio.h>
int main()
// {
//     float yrs, days;
//     printf("Enter days: ");
//     scanf("%f",&days);
//     yrs=days/365;
//     printf("Years = %f\n", yrs);
//     return 0;  

// }
{

     int yrs,weeks,days; 
     printf("Enter days: "); 
     scanf("%d",&days); 
     /*To calculate year*/ 
     yrs = days/365; // Here, leap years are ignored 
     /* To calculate weeks*/ 
weeks = (days%365)/7; 
/* To calculate days*/ 
days = days-((yrs*365) + (weeks*7)); 
/* Print calculated years,weeks & days*/ 
printf("\n%d Years, %d Weeks & %d Days.",yrs,weeks,days); 
return 0; 
}