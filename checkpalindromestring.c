#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],c[20];
    scanf("%s",&a);
    strcpy(c,a);
    strrev(a);
   // printf("%s",a);
    if(strcmp(c,a)==0) printf("It's a palindrome string");
    else printf("It's a not a  palindrome string");
    return 0;

}