/* 6.Write a program to check entered character vowel or consonant. */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c",&ch);
    
    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch=='U')
        {
            printf("Entered Alphabet is Vowel");
        }
        else
        {
            printf("Entered Alphabet is Consonent");
        }
        
    }
    else
    {
        printf("Please enter a valid alphabet");
    }
    
    
    return 0;
}