/*Write a C program to find the length of the string using Pointer.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=0;
    printf("Enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("The length of the string is:%d",count);
    return 0;
}

/*
Output:
Enter the string:Hello
The length of the string is:5
*/

/*
Enter the string:Hello
The length of the string is:5

*/