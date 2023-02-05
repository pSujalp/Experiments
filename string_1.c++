#include<string.h>
#include<stdio.h>

int main()
{
    char a[20],c[20],s1[]="eeeDJDDJ";
    scanf("%s",&a); char k='D';char * p;
   printf("%d",strlen(a));
    strcpy(c,a);
    printf("%s\n\n",a);
    strrev(c);
   printf("%s\n",c);
    if(strcmp(c,a)==0)
    printf("!");
    else printf("&");
    
   p=strchr(a,k);
 printf("%s\n\n",p);
 printf("%s\n\n",strcat(c,a));
 //printf("%d\n",strstr(a,c));
 printf("%s\n\n",strstr(c,s1));
    return 0;

}