// Write a program to check whether given char is vowel or not using switch case statement
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Given character is vowel\n",ch);
            break;
    
    default:
        printf("GIven character is consonent\n",ch);
    }
    return 0;
}