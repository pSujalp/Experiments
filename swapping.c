#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d",a);
    printf("%d",b);
    return 0;
}