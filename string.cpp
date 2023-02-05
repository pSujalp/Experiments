#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
    char a[]={"string"},c[20];
    int array[2]={2,4};
    //c[20]=a[7];
  strcpy(c,a);
   strcat(a,c);
    printf("%s\n",a);
    //printf("%s",strcat(a,c));
  // puts(a);
  if(strcmp(a,c)==0) printf("0");
  else printf("1\n");

  printf("%d",sizeof(a));

}