
#include<string.h>
#include<conio.h>
#include<stdio.h>

int main()
{
   char s[20],c[20];

    printf("Enter the string");
    gets(s);
    strcpy(c,s);
    strrev(c);
    if(strcmp(s,c)==0) 
    printf("1");
    else printf("0");

}