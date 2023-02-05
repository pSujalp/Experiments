#include<stdio.h>
#include<string.h>
int main(){
   char string[25],c[25];
   printf("Enter String to be reversed : ");
   scanf("%s",&string);
   strcpy(c,string);
   if(strcmp(c,string)==0) printf("it's a palindrome string");
   else printf("Invalid");
   return 0;
}