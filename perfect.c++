#include<stdio.h>

int main()
{
    int i,j,k,n,f=0;
    scanf("%d",&n);
    k=n;
    for(i=1;i<n;i++)
    {
        
        if(n%i==0) { f+=i;}
        else {continue;}
    }
    if(k==f) printf("It's a perfect no %d",f);
    else printf("its not a perfect number");
}