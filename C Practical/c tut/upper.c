#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    printf("Enter the String: ");
    gets(s1);
    strlwr(s1);
    printf("String is: %s\n", s1);
    return 0;
}