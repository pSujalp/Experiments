#include<stdio.h>

int main()
{
    int a,b;
    int *ptr=&b,*ptr1,*ptr2;
    ptr1=&a;
    ptr2=ptr1-ptr;
    printf("%d\n",ptr1);
  //  printf("%d",ptr2/4);
}