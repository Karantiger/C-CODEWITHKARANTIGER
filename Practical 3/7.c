/* 7.Write a program to count total number of notes in entered amount. */
#include<stdio.h>
int main()
{
    int amt;
    printf("Enter the amount: ");
    scanf("%d",&amt);

    //Logic
    printf("2000=%d\n", amt/2000);
    printf("500=%d\n", amt%2000/500);
    printf("200=%d\n", amt%2000%500/200);
    printf("100=%d\n", amt%2000%500%200/100);
    printf("50=%d\n", amt%2000%500%200%100/50);
    printf("20=%d\n", amt%2000%500%200%100%50/20);
    printf("10=%d\n", amt%2000%500%200%100%50%20/10);
    printf("5=%d\n", amt%2000%500%200%100%50%20%10/5);
    printf("2=%d\n", amt%2000%500%200%100%50%20%10%5/2);
    printf("1=%d\n", amt%2000%500%200%100%50%20%10%5%2/1);
    return 0;
}