#include<string.h>
#include<stdio.h>

int main()
{
    char c[25],str[25];
    gets(str);
   // strrev(str);
    strcpy(c,str);
    strrev(str);
    if(strcmp(str,c)==0) printf("It's a palindrome string ");
    else printf("It's not a palindrome string");
    return 0;

}