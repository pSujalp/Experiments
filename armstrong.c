#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,n,sum=0,k;
    scanf("%d",&n);
    k=n;
    while(n>0)
    {
        i=n%10;
        sum+=i*i*i;
        n/=10;
    }
    if(sum==k) printf("%d",sum);
    else printf("It's not a armstrong no");
}