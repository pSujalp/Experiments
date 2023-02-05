#include<stdio.h>
#include<string.h>


int main()
{
    char s[20],c[20];
    scanf("%s",&s);
    strcpy(c,s);
    strrev(s);
    if(strcmp(s,c)==0) printf("Palindrome string%s",s);
    else printf("Invalid%s",s);

    
}