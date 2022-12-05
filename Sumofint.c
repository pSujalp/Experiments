#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,a,b;
    scanf("%d",&a);
    while(b>0)
    {
        b=a%10;
        sum+=b;
        a/=10;
    }
    printf("Sum is %d ",sum);
}
