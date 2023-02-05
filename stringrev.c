#include<stdio.h>
#include<string.h>

int main()
{
    char s[5]="sujal";
 // scanf("%s",&s);
   // printf("%s",s);
    int l=strlen(s);
   // s[l];
    printf("length %d\n",l);
    for(int i=l-1;i>=0;i--) printf("%c",s[i]); 
    return 0; 

}