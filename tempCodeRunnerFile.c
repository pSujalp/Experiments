#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,Temp;
    scanf("%d",&a);
    scanf("%d",&b);
    Temp=a;
    a=b;
    b=Temp;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}