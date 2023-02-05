#include <stdio.h>
#include <string.h>
 
int main()
{
     char str[20];
    scanf("%s",&str);
    int len=strlen(str);
   // str[len];
   
    int l = 0;
    int h = len - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s is not a palindrome\n", str);return 0;}
    }
 
    printf("%s is a palindrome\n", str);
 
    return 0;
}